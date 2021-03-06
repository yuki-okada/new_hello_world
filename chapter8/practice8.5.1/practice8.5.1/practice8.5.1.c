/*練習問題8.5.1
各行が、その数、2乗、3乗で構成される表を表示するプログラムを作成して、
各行を左寄せで整列させてください。
基になる数は2から100まで*/

#include<stdio.h>

int main(int argc, char* argv[])
{
	long int number[99][3];
	int length  = 0;
	int wideth  = 0;

	/*配列の初期化*/
	for (length = 0; length < 99; length++) {
		for(wideth = 0; wideth < 3; wideth++){
			number[length][wideth] = 0;
		}
	}

	/*配列に数字を格納*/
	for (length = 0; length < 99; length++) {
		for (wideth = 0; wideth < 3; wideth++) {
			if (wideth == 0) {
				number[length][wideth] = (length + 2);
			}
			else if (wideth == 1) {
				number[length][wideth] = (length + 2) * (length + 2);
			}
			else {
				number[length][wideth] = (length + 2) * (length + 2) * (length + 2);
			}
		}
	}

	/*配列の数字を表示する。*/
	for (length = 0; length < 99; length++) {
		for (wideth = 0; wideth < 3; wideth++) {
			printf("%-8ld", number[length][wideth]);  /*一番大きい数字が100の3乗(7桁)なので、それ+1を基準に最小フィールド幅を指定*/
		}
		printf("\n");	/*3つ数字を出したら改行*/
	}
	
	return 0;
}