/*部屋の数を聞き、各部屋の寸法から家屋の床面積を計算するプログラム*/

#include<stdio.h>

int main(void)
{
	int count = 0;
	int number = 1;
	int width = 0;
	int length = 0;
	int area = 0;

	printf("家屋の面積を計算します。\nまずは、部屋の数を入力してください。\n");
	scanf_s("%d", &count);

	for (; count > 0; count--, number++) {
		printf("%dつ目の部屋の縦の長さを入力してください。\n", number);
		scanf_s("%d", &length);

		printf("%dつ目の部屋の幅を入力してください。\n", number);
		scanf_s("%d", &width);

		printf("%dつ目の部屋の面積は%dです。\n", number, length * width);
	}
	return 0;
}