#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<windows.h>
void menu()
{
	char arr1[] = "��ӭ��������˧�����Ϸ���Ժ�\n";
	char arr2[] = "###########################\n";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];//arr2 ��������ֵ �����޸ĵĳ���
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}

	printf("##########################\n");
	printf("######1.play 0.exit#######\n");
	printf("##########################\n");

}

#include<windows.h>
#include<stdlib.h>
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("���������С��\n");
			
		}
		if (guess > ret)
		{
			printf("��������´���\n");
			
		}
		if (guess == ret)
		{
			printf(" ��Ϸ��û�� �����룺������\n");
			scanf("%s", input);
			if (strcmp(input, "������") == 0)
			{
				system("shutdown -a");
				printf("��ϲ�㣬����\n");
				Sleep(1000);
				break;
			}
		}
	}
}

#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
	printf("��ӭ��������˧��С��Ϸ�����Ժ�\n");
	Sleep(2000);
	system("cls");
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�һ��������һ��һ��һ�ٵ��������֣���²� �¶ԲŲ���ػ�Ŷ ��ֻ��60��ʱ��>:\n");
			
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;


		}
	} while (input);
	return 0;
}


