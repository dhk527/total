#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//"queue queue dequeue " tail 부터 나오는  
//
typedef struct data{
	int num;
	char name[20];
	struct data * next;


}data;  

data * g_head = NULL;  
data * g_tail = NULL;  

void printAll(){
	data * temp = g_head; 

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
		
	temp->next= node;
	g_tail = node;
		
	}
}
int main(){
	char name[20]="";
	for(int i = 0; i < 10 ; i ++){
       		sprintf(name, "test%d", i);
		insert(i, name);
	}
		printAll();
	}

			   
