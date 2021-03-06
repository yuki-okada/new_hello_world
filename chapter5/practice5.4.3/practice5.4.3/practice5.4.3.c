/*
10×3の配列を定義し、初期化する。
各行の最初の要素に1～10の数を入れ、2番目にその数の2乗を入れ、3番目に3乗値を入れる。
ユーザーに3乗値を入力させ、その3乗根と2乗値を表示する。
サイズ指定のない配列を使用してください。
*/

#include<stdio.h>

int main(void)
{
	int number_table[][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	};
	int length = 0;
	int wideth = 0;
	int number = 0;

	for (length = 0, number = 1; length < 10; length++, number++) {
		for (wideth = 0 ; wideth < 3; wideth++) {
			if (!wideth) {
				number_table[length][0] = number;
				printf("%d", number_table[length][wideth]);
			}
			else if (wideth == 1) {
				number_table[length][1] = number * number;
				printf("%d", number_table[length][wideth]);
			}
			else {
				number_table[length][wideth] = number * number * number;
				printf("%d", number_table[length][wideth]);
			}
		}
	}

	printf("1～10の値の3乗値を、1つ選んで入力してください。\nその値の3乗根と2乗値を表示します。\n");
	scanf_s("%d", &number);

	switch (number){
		case 1:
			printf("3乗根は1です。2乗値は1です。");
			break;
		case 8:
			printf("3乗根は2です。2乗値は4です。");
			break;
		case 27:
			printf("3乗根は3です。2乗値は9です。");
			break;
		case 64:
			printf("3乗根は4です。2乗値は16です。");
			break;
		case 125:
			printf("3乗根は5です。2乗値は25です。");
			break;
		case 216:
			printf("3乗根は6です。2乗値は36です。");
			break;
		case 343:
			printf("3乗根は7です。2乗値は49です。");
			break;
		case 512:
			printf("3乗根は8です。2乗値は64です。");
			break;
		case 729:
			printf("3乗根は9です。2乗値は81です。");
			break;
		case 1000:
			printf("3乗根は2です。2乗値は100です。");
			break;
		default:
			printf("無効な数字です。");
			break;	
	}

	return 0;

}