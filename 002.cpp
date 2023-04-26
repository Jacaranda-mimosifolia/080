#include<stdio.h>
#include<string.h>
#define name Lihua
int years1,years2,Years,month1,month2,day1,day2;
static int birthdays[3];
int calculate1(int years1,int years2)
{
	return years2-years1;
}
int calculate2(int month1,int month2)
{
	return month2-month1;
}
int calculate3(int day1,int day2)
{
	return day2-day1;
}
int birthday(int years1,int month1,int day1)
{
	static int birthdays[]={years1,month1,day1};
	return 0;
}
int main()
{
	printf("请输入你的出生年号:\n");
	scanf("%d",&years1);
	printf("请输入今年的年号:\n");
	scanf("%d",&years2);
	printf("请输入你的出生月号:\n");
	scanf("%d",&month1);
	printf("请输入今年的月号:\n");
	scanf("%d",&month2);
	printf("请输入你的出生日号:\n");
	scanf("%d",&day1);
	printf("请输入今年的日号:\n");
	scanf("%d",&day2);
	Years=calculate1(years1,years2);
	if(calculate2(month1,month2)<0)
	{
		printf("你今年%d岁啦！\n",Years-1);
	}
	else if(calculate2(month1,month2)==0)
	{
		if(calculate3(day1,day2)<0)
		{
			printf("你今年%d岁啦！\n",Years-1);
			printf("你还有%d天生日\n",-calculate3(day1,day2));
		}
		else if(calculate3(day1,day2)==0)
		{
			printf("你今年%d岁啦！\n",Years);
			printf("生日快乐！\n");;
		}
		else
		{
			printf("你今年%d岁啦！\n",Years);
		}
	}
	printf("你的出生日期：%d.%d.%d\n",birthday(years1,month1,day1),birthday(years1,month1,day1),birthday(years1,month1,day1));
	return 0;
}

