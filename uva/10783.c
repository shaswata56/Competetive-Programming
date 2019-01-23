#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,num,t,hi,lo,sum[200],ns=0,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&lo,&hi);
		if(lo%2==0)
		{
			lo++;
		}
		for(j=lo;j<=hi;j=j+2)
		{
				ns=ns+j;
		}
		sum[i]=ns;
		ns=0;
	}
	for(i=1;i<=t;i++)
	{
	printf("Case %d: %d\n",i,sum[i]);
	}
	return 0;
}