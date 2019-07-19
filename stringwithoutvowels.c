#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int index,index2=0;
	char str[100001],str2[100001];
	scanf("%[^\n]s ",str);
	index=strlen(str)-1;	
	while(index>=0)
	{
		if(strchr("aeiouAEIOU",str[index]))
		index--;
		else
		{
			str2[index2++]=str[index];
			index--;
		}
	}
	str2[index2]='\0';
	printf("%s",str2);
	return 0;
}
