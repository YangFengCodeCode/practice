#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}