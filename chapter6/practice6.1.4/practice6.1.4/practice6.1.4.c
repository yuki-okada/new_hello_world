/*
forループを使って0～9まで表示するプログラム
数を表示するときにポインタを使用すること
*/

#include<stdio.h>

int main(void)
{
	int number = 0;
	int *pointer;	/*ポインターを宣言*/

	for (number = 0; number <= 9; number++) {
		pointer = &number;						/*それぞれのnumberのアドレスをpointerに保持*/
		printf("%d", *pointer);					/*保持したものを参照*/
	}

	return 0;
}