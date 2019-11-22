// 要使用 printf 和 scanf 的话，必须要 include 这个
#include <stdio.h>
// 要使用 system 的话，要使用这个
#include <stdlib.h>
int main()
{
	int year;
	printf("Enter any year.\n");
	// 输入的数字会被保存在 year 这个变量里，但是不能输入的太大，一般来说不能超过2147483647，因为超过的话 year 变量作为一个 int 的类型，它就存不下了
	scanf("%d", &year);
	// 当它除以400余数为0 或者 同时满足除以4余数为0和除以100余数不为0 时，它就应该是个闰年
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("The %d is a leap year.\n", year);
	}
	else
	{
		printf("%d not a leap year\n");
	}
	// 让程序执行到这的时候暂停住，不然弹出的黑窗口就会一闪而过
	system("pause");
	return 0;
}