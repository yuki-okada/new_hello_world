/*練習問題11.1
sum_it()関数を作成する。
この関数は式数の累積合計を表示する。*/

#include<stdio.h>

void sum_it(int number)
{
	static int sum = 0;
	sum = sum + number;

	printf("[%d]\n\n", sum);
	return 0;
}

int main(int argc, char* argv[])
{
	int count  = 0;
	int number = 0;

	printf("入力された数字の合計を表示します。\n");
	printf("例えば、3,6,4と3回入力されたら[3][9][13]と表示します。\n");

	for (;;) {
		printf("数字を入力してください。\n");
		scanf_s("%d", &number);
		sum_it(number);

		printf("他に数字を入力しますか?\n");
		printf("1：はい　　0：いいえ\n");
		scanf_s("%d", &count);
		if (count == 1) {
			continue;
		}
		else {
			break;
		}
	}
	return 0;
}