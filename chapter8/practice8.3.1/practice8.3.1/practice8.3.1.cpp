/*練習問題8.3.1
入力された文字のASCIIコードを表示するプログラム
ただし、入力された文字は表示しないプログラム*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	char character = 0;

	puts("アルファベットを1文字入力してください。");
	puts("対応したASCIIコードを表示します。");
	character = _getch();
	printf("%d", character);
}