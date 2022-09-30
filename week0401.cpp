#include <stdio.h>
int main()
{
	int R,P;
	scanf("%d",&R);
	if(R<=20) P=80;
	else if(20<R && R<=50) P=80+(R-20)*3;
	else if(50<R && R<=100) P=170+(R-50)*5;
	else P=420+(R-100)*8;
	printf("P=%d\n",P);

}
