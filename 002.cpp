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
	printf("��������ĳ������:\n");
	scanf("%d",&years1);
	printf("�������������:\n");
	scanf("%d",&years2);
	printf("��������ĳ����º�:\n");
	scanf("%d",&month1);
	printf("�����������º�:\n");
	scanf("%d",&month2);
	printf("��������ĳ����պ�:\n");
	scanf("%d",&day1);
	printf("�����������պ�:\n");
	scanf("%d",&day2);
	Years=calculate1(years1,years2);
	if(calculate2(month1,month2)<0)
	{
		printf("�����%d������\n",Years-1);
	}
	else if(calculate2(month1,month2)==0)
	{
		if(calculate3(day1,day2)<0)
		{
			printf("�����%d������\n",Years-1);
			printf("�㻹��%d������\n",-calculate3(day1,day2));
		}
		else if(calculate3(day1,day2)==0)
		{
			printf("�����%d������\n",Years);
			printf("���տ��֣�\n");;
		}
		else
		{
			printf("�����%d������\n",Years);
		}
	}
	printf("��ĳ������ڣ�%d.%d.%d\n",birthday(years1,month1,day1),birthday(years1,month1,day1),birthday(years1,month1,day1));
	return 0;
}

