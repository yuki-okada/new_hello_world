/*距離と平均速度から所要時間を求めるプログラム(計算する回数をユーザーが指定)*/

#include<stdio.h>

int main(void)
{
	int distance =
		0;
	int speed = 0;
	int count = 0;

	printf("計算する回数を入力してください。\n");

	for (scanf_s("%d", &count); count > 0; count--) {
		printf("距離を入力してください。\n");
		scanf_s("%d", &distance);
		printf("速度を入力してください。\n");
		scanf_s("%d", &speed);

		printf("所要時間は%dです。\n\n", distance / speed);
	}

	return 0;
}