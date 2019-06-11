#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int size,arr=0,index,num;
	scanf("%d",&size);
	for(index=0;index<size;index++)
	{
		scanf("%d ",&num);
		arr=arr^num;
	}
	printf("%d",arr);
	return 0;
}
