#include <stdio.h>
#include <string.h>

int main(){



	int i=10,j=10;
	char arr[i];
	char rev_arr[j];

	scanf("%s",arr);
	printf("%s\n",arr);
	
	int k=strlen(arr);
	
	for(i=k;i>=0;i--){	
	rev_arr[k-i-1]=arr[i];	
	}

	printf("%s\n",rev_arr);
	return 0;
	
}
	

