/*
3つの文字ポインタを作成し、最初のポインタがone
2つ目のポインタがtwo、3つ目のポインタがthreeを指すように初期化する。
その後、この文字列の順列を6つ表示するプログラム
*/

#include<stdio.h>

int main(void) {
	char* p_first  = "one";
	char* p_second = "two";
	char* p_third  = "three";

	printf("%s  %s  %s \n", p_first, p_second, p_third);
	printf("%s  %s  %s \n", p_second, p_third, p_first);
	printf("%s  %s  %s \n", p_third, p_second, p_first);

	return 0;
}