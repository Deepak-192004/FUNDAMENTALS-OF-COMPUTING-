#include <stdio.h>
int main() 
{
	int n,i;
	printf("Till which number you want to print the square:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i);
	}
	return 0;
}
