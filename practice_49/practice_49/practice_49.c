#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c", killer);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if (('a' != killer) + ('c' == killer) + ('d' == killer) + ('d' !=
//			killer) == 3)
//		{
//			printf("%cÊÇkiller", killer);
//		}
//	}
//
//	return 0;
//}

#/*include<stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1))
						{
							if (A * B * D * C * E == 120)
							{
								printf("A=%d B=%d C=%d D=%d E=%d", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}*/


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n",
//									a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			printf("  ");
		}
		for (j = n - i - 1; j < n; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}