#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);

	if(n<0)   n=-n;
    if(n<10) n=n;
	if(n>10) n=n/10;
	if(n>10) n=n/10;
	if(n>10) n=n/10;
	printf("%d\n",n);
	}
