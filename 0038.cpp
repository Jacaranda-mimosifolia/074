#include<stdio.h>
#define len 2//ѭ������ 
#define Len 10//���������� 
int main()
{
	int num,Num,j;//num:������; j:�����±� 
	static int numble[Len];
	for(int i=0;i<len;i++)//ѭ������ 
	{
		num=0;j=0;
		printf("������һ������1����:");
		scanf("%d",&num);
		Num=num;
		for(int a1=0;a1<Len;a1++)//���������� 
		{
			for(int a2=2;a2<num+1;a2++)//i!=0 && i!=1; 
			{
				if(num%a2==0)
				{
					printf("j=%d\t",j);
					numble[j]=a2;
					printf("numble[%d]=%d",j,numble[j]);
					num=num/a2;
					j++;
					printf("\tnum=%d\n",num);
					break;
				}
				else
				{
					continue;
				}
				
			}
			if(num==1)
			{
				break;
			}
		}
		printf("%d=",Num);
		for(int m=0;m<j;m++)
		{
			printf("%d",numble[m]);
			if(m!=j-1)
			{
				printf("*");
			}
		}
		printf("\n\n");
	}
	return 0;
}

