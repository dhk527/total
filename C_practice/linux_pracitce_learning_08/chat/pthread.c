#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a=0;
pthread_mutex_t mutex; // JAVA의 synchronize랑 동일 mutex도 return 하지 않으면 반환하지 않으면 메모리 릭이 발생
		       // 크리티컬한 영역을 방지할 수 있는 기능이다. 

void* thread1(void* arg){

	printf("arg : %d\n", (int)arg); // " void인데 왜 int가 되냐? 뭐가 되든 101010110 구조니까 할 수 있지
	while(1){

		pthread_mutex_lock(&mutex);
		printf("thread1%d a[%d]\n",(int)arg,++a);
		pthread_mutex_unlock(&mutex);
		sleep(2);

		}
	return NULL;
}
//"void는 return이 없는 것 , 보이드 포인터를 리턴할 건데, 정해진 포인트 형식은 없다.(무슨 형태던 하여튼 다 받는
//" 형변환을 맘대로 할 수 있다"




int main(){

	pthread_t s_thread[2]; // 핸들 인자를 하나 넣어가지고 thread 이거갔다 저거갔따 시킨다.
	int id1 = 77;
	int id2 = 88;
	pthread_mutex_init(&mutex,NULL); // 기본 옵션 NULL = fast 설정이래

	pthread_create(&s_thread[0],NULL,thread1,(void*)id1); // const char * 는 "읽기 전용 데이터"에서 주로 사용 값이 안바뀐다.
	pthread_create(&s_thread[1],NULL,thread1,(void*)id2);

       	// thread가 생성되면 그 thread에 대한 정보를 갖는다. 두번째건 NULL 쓰레드 옵션, 3번째는 넘겨받는것 4번째는 넘겨줄것
	pthread_join(s_thread[0],NULL);// join안하면 바로 종료 된다.
	pthread_join(s_thread[1],NULL);// pthread_join 쓰기 싫으면 while(1){ sleep(1);} 돌려도 된다.
				       // while(1){ "main loop\n" ); sleep(1); } 하면 3개의 pthread를 갖는 효과를 얻는다.



}

