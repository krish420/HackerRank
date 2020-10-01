#include <stdio.h>
#include <math.h>
int main()
{
	int X,i,K,p,q,T,m=0;
	scanf("%d",&T);
	while(m<T)
	{
	    int sum=0,add=0;
		scanf("%d%d",&X,&K);
		for(i=2;i<=X;i++)
		{
			if(X % i ==0)
			{
					p=pow(i,K);
					sum=p+sum;
			}
		}
		printf("%d\t",sum);
		for(i=2;i<=K;i++)
		{
			if(K % i ==0)
			{
					q=i*X;
					add=q+add;
			}
		}
		printf("%d",add);
		m++;
	}
}