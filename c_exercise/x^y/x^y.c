#include<stdio.h>
int main()
{
	float x,n=1;
	int y,i;
	printf("Input x and y:");
	scanf("%f%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		n*=x;
	}

	if(n-(int)n>0)

         	printf("x^y=:%f\n",n);
	else
		printf("x^y=:%d\n",(int)n);
}
