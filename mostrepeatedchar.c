#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int count=0,max=0,index1,index2;
	char str[100001],ch;
	scanf("%[^\n]s",str);
	for(index1=0;index1<strlen(str);index1++)
	{
		count=0;
		for(index2=index1+1;index2<strlen(str);index2++)
		{
			if(str[index1]==str[index2])
			count++;
		}
		if(count>max)
		{
			max=count;
			ch=str[index1];
		}
	}
	printf("%c",ch);
	return 0;
}
