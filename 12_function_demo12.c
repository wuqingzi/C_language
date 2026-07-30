#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
		生成1~100之间的随机数
		使用键盘录入去猜，猜中为止
	*/

	//1..生成随机数
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("请输入1~100之间的数字：");//提示要输入的整数范围

	//2.判断是否相等
	while (1)
	{
		//3.键盘录入数字
		int guess;
		scanf("%d", &guess);

		//4.判断大小
		if (guess < num)
		{
			printf("小了\n");
		}
		else if (guess > num)
		{
			printf("大了\n");
		}
		else
		{
			printf("恭喜你，中大奖了！！！\n");
			break;
		}
	}

	return 0;
}