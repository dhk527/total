#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>


#define CLNT_MAX 10
#define BUFFSIZE 200

int g_clnt_socks[CLNT_MAX];
int g_clnt_count=0;

pthread_mutex_t g_mutex;

void send_all_clnt(char * msg, int my_sock){
		pthread_mutex_lock(&g_mutex);

		for(int i = 0; i < g_clnt_count ; i++){
		
		if(g_clnt_socks[i] !=my_sock){
			printf("send msg : %s",msg);
			write(g_clnt_socks[i],msg,strlen(msg)+1);
		
				}

	}

	pthread_mutex_unlock(&g_mutex);

}

void * clnt_connection(void * arg){
	
	int clnt_sock = (int)arg;
	int str_len=0;

	char msg[BUFFSIZE];
	int i;

	while(1){
	str_len	= read(clnt_sock, msg, sizeof(msg));

		if(str_len == -1){ // -1은 에러 일때만을 나타낸다.
		printf("clnt[%d] close\n", clnt_sock);
			
		break;

		}
		send_all_clnt(msg,clnt_sock);
		printf("%s\n",msg);
		
	}

		pthread_mutex_lock(&g_mutex);
			
		close(clnt_sock);

		for(i=0 ; i<g_clnt_count; i++){
			if(clnt_sock = g_clnt_socks[i]){
				for( ; i<g_clnt_count-1;i++)
					g_clnt_socks[i]=g_clnt_socks[i+1];
				break;
			}//end if

		}//end for
		
		pthread_mutex_lock(&g_mutex);
		pthread_exit(0); // 완전 자원이 반환된다. 
		return NULL;
		

}

int main(int argc, char ** argv){

	int serv_sock;
	int clnt_sock;
	

	pthread_t t_thread;

	struct sockaddr_in clnt_addr;
	int clnt_addr_size;

	struct sockaddr_in serv_addr;
	serv_sock=socket(PF_INET, SOCK_STREAM, 0); //" 빈 소켓"을 만들어보자, socket을 열거야 근데 우리는 IPv4를 쓸거야
	pthread_mutex_init(&g_mutex,NULL);


	// "PF는 Protocol을 정의할 떄 사용할때는 P를 쓴다 "
	//"IPv4", "TCP 통신"  " IPPOROTO_HOPOPT" 같은 역할
	serv_addr.sin_family = AF_INET; 
	// "Address관련해서 설정할 때는 A를 쓴다 " , "두개를 바꿔도 아무 이상없다 "

	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	//"소켓에 주소를 넣기  "          ="host to network order large=32bit","( 내 현재에 pc와 ip " "pc가 사용하고 있는 IP를 자동으로 가져온다)"
	
	serv_addr.sin_port=htons(7889);
			//"host to network order short(16bit), argv[1] 문자열을 인티져로 네트워크로 바꾸는 과정이 원래인데 간단하게 7989 포트를 쓴다. 
	
	if (bind(serv_sock,(struct sockaddr *)& serv_addr, sizeof(serv_addr)) == -1){
		printf("bind error\n");
	}

	if(listen(serv_sock,5)== -1){
		printf("listen error");
	}

	char buff[200];
	int recv_len=0;

	while(1){
		clnt_addr_size=sizeof(clnt_addr);
		clnt_sock=accept(serv_sock,(struct sockaddr *)&clnt_addr,&clnt_addr_size);
		
		// 채팅을 전달해보자 		
		// " 가장 중요한 고객의 IP 주소" 나에게 가져온 고객의 IP번호를 통해 IP 추적 IP blocking등이 가능하다. 

		//g_clnt_socks[g_clnt_count] = clnt_sock;
		// " 쓰레드를 사용하지 않을때는 받고 읽는 것밖에 못한다 "
		
		pthread_mutex_lock(&g_mutex);
//고객이 넘어 오는 부분 !
		g_clnt_socks[g_clnt_count++] = clnt_sock; // 손님이 늘어날떄마다 한명씩 한명씩 채팅을 전달해보자.
		pthread_mutex_unlock(&g_mutex);


	/*	while(1){
		recv_len = read(clnt_sock, buff, 200); // 고객전용의 read를 받는 것을 만들거다. 실제 통신 부분은 thread를 인자 를 넘길부분
		
		printf("recv : ");
		for(int i = 0; i < recv_len ; i++){
			printf("%02X ", (unsigned char)buff[i]);
		}
		printf("\n");
		}	" 아래는 쓰레드를 사용하는 경우다.	*/
		
		pthread_create((&t_thread),NULL,clnt_connection, (void *) clnt_sock);



	}

}
		// 왜 5 를 넣지? " 여러 고객들이 오는데 listen 에서 accept할 때 큐에 하나씩 빠지게 하고 5명 이상이 리슨상태로 대기할 수 있는지 확인한다.
	

