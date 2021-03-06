/*練習問題12.1.2
仮引数付きのマクロを用いて絶対値を計算するプログラム*/

#include<stdio.h>
#include<stdlib.h>

/*数字が0より小さければ符号を入れ替えた数字を返し、0より大きければそのまま*/
#define ABSOLUTE(number) (number < 0) ? -number : number

/*演算選択の関数*/
int menu(void)
{
	int choice = 0;

	printf("演算の種類を選んでください。\n");
	printf("足し算：0\n");
	printf("引き算：1\n");
	printf("掛け算：2\n");
	printf("割り算：3\n");
	scanf_s("%d", &choice);

	return choice;
}

/*1つ目の数字を入力する関数*/
int first_input(void)
{
	int number = 0;

	scanf_s("%d\n", number);
	
	return number;
}
/*2つ目の数字を入力する関数*/
int second_input(void)
{
	int number = 0;

	scanf_s("%d\n", number);

	return number;
}

int main(int argc, char* argv[])
{
	int choice = 0;
	int first_value = 0;
	int second_value = 0;

	/*計算のタイプ状態を列挙*/
	enum calculation_type { add, sub, mul, div } calculation;
	for (choice = 0;;) {
	

		printf("入力された2つの整数を絶対値に直して計算します。\n");

		choice = menu();

		printf("1つ目の数字を入力してください。\n");
		first_value = first_input();
		rewind(stdin);
		printf("2つ目の数字を入力してください。\n");
		second_value = second_input();
		rewind(stdin);

		switch (choice) {
		case add:
			printf("%d + %d= %d", ABSOLUTE(first_value), ABSOLUTE(second_value), ABSOLUTE(first_value) + ABSOLUTE(second_value));
			break;
		case sub:
			printf("%d - %d= %d", ABSOLUTE(first_value), ABSOLUTE(second_value), ABSOLUTE(first_value) - ABSOLUTE(second_value));
			break;
		case mul:
			printf("%d × %d= %d", ABSOLUTE(first_value), ABSOLUTE(second_value), ABSOLUTE(first_value) * ABSOLUTE(second_value));
			break;
		case div:
			printf("%d ÷ %d= %d あまり %d", ABSOLUTE(first_value), ABSOLUTE(second_value), ABSOLUTE(first_value) / ABSOLUTE(second_value), ABSOLUTE(first_value) % ABSOLUTE(second_value));
			break;
		default:
			printf("無効な入力です。はじめからやり直してください。\n");
			exit(1);
		}
		printf("もう一度演算を行いますか?\n");
		printf("はい：1  いいえ：それ以外\n");
		scanf_s("%d", choice);
		if (choice == 1) {
			continue;
		}
		else {
			break;
		}
	}
	
	return 0;
}