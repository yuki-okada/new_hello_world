/*
ユーザーの入力した半角の英字、数字、区切り文字(. : / など)の個数をカウントするプログラム
Enterキーを押すと終了
switch文を使って文字をカテゴリ分けします。
プログラム終了時に、それぞれのカテゴリの文字数を表示します。
数字でも区切り文字でもない文字は英字扱いします。
*/

#include<stdio.h>

int main(void)
{
	int letter = 0;
	int number = 0;
	int other = 0;
	char character;

	printf("入力した文字を、英字、数字、区切り文字に分類して、それぞれ入力された文字の個数を表示します。\nEnterキーを押すと終了します。\n");

	do {
		printf("文字を入力してください。");
		character = getchar();

		switch (character) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				number++;
				break;
			case '.':
			case ',':
			case '!':
			case '?':
			case ';':
			case ':':
			case '/':
				other++;
				break;
			default:
				letter++;
				break;
		}


	} while (character != '\r');

	printf("入力された文字は、以下の通りです。\n英字：%d  数字：%d  区切り文字：%d \n", letter, number, other);
	
	return 0;
}