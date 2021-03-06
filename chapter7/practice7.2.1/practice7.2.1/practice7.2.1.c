/*
ある整数の階乗を計算するプログラム
再帰を使って計算するfactという関数を作成する。
*/
#include<stdio.h>

void factorial(int number, int answer);	/*関数プロトタイプ*/

int main(void) {
	int number = 0;
	int answer = 1;
	
	puts("自然数を入力してください。");
	puts("入力された自然数の階乗を計算して、出力します。");

	scanf_s("%d", &number);

	factorial(number,answer);

	return 0;
}

void factorial(int number, int answer) {
	if (number) {		/*階乗計算なので、1個ずつ値を減らしていく。それが0になったら、計算をやめる*/
		printf("%d×", number);
		answer = answer * number;
		factorial(number - 1, answer); /*answerはそのまま引き継ぐので、そのまま引数にする*/
	}
	else {
		printf("=%d", answer);
	}

	return 0;
}