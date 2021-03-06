/*
ユーザーに距離を入力させ、その距離を光が進むのにかかる時間に変換して出力するプログラム
距離の格納には、unsigned long int型の変数を用いること
光速は18600マイル/秒 として計算するものとします。
*/

#include<stdio.h>



int main(void)
{
	unsigned long int distance = 0;
	double time                = 0;
	
	printf("距離から光が進むのにかかる時間を出力します。\n距離(マイル)を入力してください。\n");
	scanf_s("%lu", &distance); /*unsigned long intだから%lu*/

	time = distance / 18600;

	printf("光が進むのにかかる時間は%lfです。\n", time);

	return 0;
}