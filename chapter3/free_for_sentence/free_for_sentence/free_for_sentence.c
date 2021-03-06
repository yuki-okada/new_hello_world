/*for文の柔軟性*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	/*1つ目のforループ*/
	
	int number = 0;
	char alphabet = 'a';

	for (number = 0; alphabet != 'q'; number++) {	/*条件判定部とループ制判変数が関わりなくてもよい。*/
		printf("%d\n", number);
		alphabet = getchar();
	}

	/*2つ目のforループ*/

	printf("正の整数を入力してください。\n");
	scanf_s("%d", &number);

	for (; number; number--) {	/*初期設定部はfor文の外でユーザが入力するため、空でも成り立つ*/
		printf("%d\n", number);	/*条件判定部のnumberはnumber = 0と書く必要はない。*/
	}

	/*3つ目のforループ*/

	for (alphabet = getchar(); alphabet != 'q'; alphabet = getchar()) {	/*はじめに初期設定部のgetche()が呼び出され、次に判定部と比較される。そしてインクリメント部のgetche()が呼び出される。これの繰り返し。*/
		;																/*ターゲット部は空欄でも大丈夫(正確には;が必要だけど)*/
	}

	printf("qが入力されました");



	return 0;
}