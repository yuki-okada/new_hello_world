/*
例8.2.1のプログラムを、入力操作時のエラーをチェックするように書き直してください
例8.2.1のプログラムの概要
getchar関数を用いて、文字を入力されるたびに'.'を出力する無限ループ。
enterキーが押されたら終了する。*/

#include<stdio.h>

int main(void)
{
	char character = '\0';
	do {
		character = getchar();
		rewind(stdin);

		if (character == EOF) {	/*EOFマクロが返されたなら*/
			puts("入力エラーです。");
			break;
		}
		else if (character != '\n'){
			puts("正常に入力されました。");
			puts(".");
		}
	} while (character != '\n');

	return 0;
}