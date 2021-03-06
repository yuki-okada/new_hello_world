/*円、長方形、三角形のいずれかを選択して、その面積を計算するプログラム*/

#include<stdio.h>

int circle(void);
int rectangle(void);
int triangle(void);

int main(void)
{
	int select = 0;
	int surface = 0;

	printf("面積を計算します。図形を選択してください。\n円:1  長方形:2  三角形:3\n");
	scanf_s("%d", &select);

	if (select == 1) {
		surface = circle();
		printf("面積は%dです。",surface);
	}
	else if (select == 2) {
		surface = rectangle();
		printf("面積は%dです。", surface);
	}
	else if (select == 3) {
		surface = triangle();
		printf("面積は%dです。", surface);
	}

	return 0;
}

int circle(void)
{
	int radius = 0;
	int surface = 0;

	printf("半径を入力してください。\n");
	scanf_s("%d", &radius);

	surface = radius * radius * 3;

	return surface;
}

int rectangle(void)
{
	int length = 0;
	int width = 0;
	int surface = 0;
	
	printf("タテの長さを入力してください。\n");
	scanf_s("%d", &length);
	printf("ヨコの長さを入力してください。\n");
	scanf_s("%d", &width);

	surface = length * width;

	return surface;
}

int triangle(void)
{
	int length = 0;
	int height = 0;
	int surface = 0;

	printf("底辺の長さを入力してください。\n");
	scanf_s("%d", &length);
	printf("高さを入力してください。\n");
	scanf_s("%d", &height);

	surface = (length * height) / 2;

	return surface;
}