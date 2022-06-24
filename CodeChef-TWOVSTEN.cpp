#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,count=0;
		scanf("%lld",&x);
		if(x%10==0)
		{
			printf("0\n");
		}
		else if((x*2)%10==0)
		{
			count++;
			printf("%lld\n",count);
		}
		else
		{
			printf("-1\n");
		}
		
	}
	return 0;
}