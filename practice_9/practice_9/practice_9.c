//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ�������������
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)����Ϊ�����ε������ߣ��ÿո�ָ������������
//	���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ�����������������������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����







#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	while(scanf("%d %d %d", &a, &b, &c) !=EOF )
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && b != c) || (a == c && c != b) || (c == b && b != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
			printf("Not a triangle!\n");
	}
	
}