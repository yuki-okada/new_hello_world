/*
練習問題6.7.2
整数変数のポインタを関数に渡すプログラム
関数内部で、この変数に-1を代入し、関数から戻ったときに戻り値を表示する。。
*/

#include<stdio.h>

int sub(int* p_number); /*関数プロトタイプ*/

int main(void){
	int number = 0;
	int* p_number = NULL;

	p_number = &number;
	
	sub(p_number);

	printf("numberに代入された値は%dです。", number);
	
	return 0;
}

int sub(int* p_number) {
	*p_number = -1;

	return *p_number;
}