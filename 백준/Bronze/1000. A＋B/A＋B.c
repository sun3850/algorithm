#include<stdio.h>

void hi()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", a + b);
}

int main()
{
	hi();
	return 0;
}