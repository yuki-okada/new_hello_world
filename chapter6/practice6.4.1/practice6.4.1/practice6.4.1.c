/*
3つの文字ポインタを作成し、最初のポインタがone
2つ目のポインタがtwo、3つ目のポインタがthreeを指すように初期化する。
その後、この文字列の順列を6つ表示するプログラム
*/

#include<stdio.h>

int main(void) {
	char* first  = "one";
	char* second = "two";
	char* third  = "three";

	printf("%s  %s  %s \n", first, second, third);
	

	return 0;
}