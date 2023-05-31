#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<windows.h>
void menu()
{
	char arr1[] = "欢迎来到杨枫大帅哥的游戏请稍后\n";
	char arr2[] = "###########################\n";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];//arr2 必须是左值 可以修改的常量
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
			printf("蠢货，你猜小了\n");
			
		}
		if (guess > ret)
		{
			printf("蠢货，你猜大了\n");
			
		}
		if (guess == ret)
		{
			printf(" 游戏还没完 请输入：我是猪\n");
			scanf("%s", input);
			if (strcmp(input, "我是猪") == 0)
			{
				system("shutdown -a");
				printf("恭喜你，菜鸟\n");
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
	printf("欢迎来到杨枫大帅哥小游戏！请稍后\n");
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
			printf("我会随机生成一个一到一百的整形数字，请猜猜 猜对才不会关机哦 你只有60秒时间>:\n");
			
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;


		}
	} while (input);
	return 0;
}


