#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// "Stack Push pop " head 부터 나오는 것


typedef struct data{
	int num;
	char name[20];
	struct data * next;


}data;  

data * g_head = NULL;  
data * g_tail = NULL;  

void printAll(){
	data * temp = g_head; 

	if(g_head == NULL){
		printf( "no data ...\n");
		return;}

			
		while(temp->next)
		{
		printf("=s=\n");
		printf("num : %d\n", temp->num);
		printf("name : %s\n", temp->name);
		printf("=e=\n");
		temp = temp -> next;
		}

		printf("=s=\n");
		printf("num : %d\n", temp->num);
		printf("name : %s\n", temp->name);
		printf("=e=\n");
	}

int insert(int num, char * name){ 

	data *node = malloc(sizeof(data)); 
	node->num = num; 
	if(name != NULL){
		strcpy(node->name, name);     
 	 }
	node -> next = NULL; 
	
	if(g_head == NULL){
		g_head = node;
		g_tail = node;
		return 1;
	}else{ 
		data *temp = g_head;
		while(temp -> next){
			temp = temp->next; // 반대로 할 시 next가 temp값이 되는데 그러면 temp -> next (혼자 도는거임) 
		}
		temp->next= node;
		g_tail = node;
		return 1;
	}
	return 0;
}

data * stack_pop(){


	if(g_head == NULL){
		return NULL; // head에 꺼낼게 없으면 return으로 아무것도 없다고 보내면 된다. 
	}

	data * node = g_tail;
	data * temp = g_head;
	data * before = NULL;

	while(temp-> next){ // node가 두개라 temp-> 가 있냐고 하면 있다하고
			    
		before = temp; // temp에 before을 저장한다. 
		temp = temp -> next; // temp에 next 2번이 된다. 
	
	}

	g_tail = before;

	if(before != NULL){
		before->next = NULL;
	}

	if(g_tail == NULL)
	{
		g_head = NULL;
	
	}



	return node; 

}

int main(){
	char name[20]="";
	for(int i = 0; i < 10 ; i ++){
       		sprintf(name, "test%d", i);
		insert(i, name);
	}
		printAll();

		for(int i = 0; i<10 ; i++){	
		data * node1 = stack_pop();
		printf("**************\n");
		printf("pop num : %d\n" ,node1 -> num);
		printf("pop name : %s\n" ,node1 -> name);
		printf("**************\n");
		free(node1);		
		printAll();
		// "return 1; 진짜 반환함 ; return 1 하면 반환값을 저장하지 않음 막하면 안된다 ;; 
		
		}
		
		return 1;

	}

			   
