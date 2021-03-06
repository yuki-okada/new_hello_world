/*2～1000の範囲のすべての素数を見つけるプログラムを作成してください。*/

#include<stdio.h>

int main(void)
{
	int select = 0;
	int integer = 0;
	int number = 0;
	int judge = 1;

	
	do {
		printf("素数についてのページです。\n\n素数テスタ： 1\n素数一覧　： 2\n");
		scanf_s("%d", &select);

		switch (select) {
		case 1:
			printf("判別したい整数を入力してください。\n");
			scanf_s("%d", &integer);
			for (number = 2; number < integer; number++) {
				if (integer%number == 0) {
					judge = 0;
				}
			}
			if (judge == 1) {
				printf("素数です。\n\n");
			}
			else {
				printf("素数ではありません。\n\n");
			}
			break;
		case 2:
			printf("素数一覧です。\n2～1000までの素数を表示します。\n");
			for (integer = 2; integer < 1001; integer++) {
				judge = 1;
				for (number = 2; number < integer; number++) {
					if (integer%number == 0) {								/*もし割り切れたらjudge=0にする。*/
						judge = 0;
					}
				}
				if (judge == 1) {										/*judgeが真(0以外)ならそれは素数だから表示する。*/
					printf("%d\n", integer);
				}
			}
			break;
		}
		select = 0;
		printf("続けますか？\nはい: 1  いいえ: 2\n");
		scanf_s("%d", &select);
	} while (select == 1);

	printf("終了します。\n");

	return 0;
}