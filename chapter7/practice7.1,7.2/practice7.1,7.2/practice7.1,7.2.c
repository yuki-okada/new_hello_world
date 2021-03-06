/*
ユーザーから10個の浮動小数点数を読み取って平均値を返す関数を作成する。
*/

#include<stdio.h>

#define data_count 10

float avg(void);	/*関数プロトタイプ・今回はユーザーに打ち込んでもらう、引数は受け取らないから(void)*/

int main(void) {
	float average = 0.0;

	puts("少数のデータを10個入力してください。");
	puts("平均値を表示します。");

	average = avg();

	printf("%f", average);

	return 0;
}

float avg(void) {
	float data[data_count] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };	/*初期化*/
	int number              = 0;
	float sum              = 0.0;
	
	for (number = 0; number < data_count; number++) {
		scanf_s("%f", &data[number]);
		sum = sum + data[number];
	}
	
	return (sum / data_count);
}