#include <stdio.h>

int main(void) {
	// your code goes here
	long long int num,power=1;
	int sum=0;
	scanf("%lld",&num);
	while(num/power)
	{
		sum=sum+(((num/power)%10)*((num/power)%10));
		power*=10;
	}
	printf("%d",sum);
	return 0;
}
