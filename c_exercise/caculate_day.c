//输入年月日计算某日是该年的第几天
//思路：判断闰年，再对不同的月份日期有所不同，可以建立一个数组储存12个月的天数
#include<stdio.h>
int leap(int i)
{
	if(i%4==0&&i%100!=0&&i%400==0)
		return 1;
	else
		return 0;

}

int caculate(int year,int month,int day)
{ 
	int i,sum=0,sign;
	sign= leap(year);
	int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
	if(sign)
	{
		for(i=0;i<month-1;i++)    //shuzu s cong b[0]kaishi
			sum+=b[i];
	}
	else
	{
		for(i=0;i<month-1;i++)
			sum+=a[i];
	}
	sum+=day;
	return sum;
}
int main()
{
	int year,month,day,sum=0;
	printf("Input year month day:");
	scanf("%d%d%d",&year,&month,&day);
	if(month>12||day>31)
		printf("Please input right way of the date");
	else
       {	sum=caculate(year,month,day);
    		printf("%d-%d-%d is the %d day of the year\n",year,month,day,sum);
       }
}

	

		
