/*3×3×3の3次元配列を定義し、1～27までの数を格納するプログラムを作成してください。*/

#include<stdio.h>

int main(void)
{
	int box[3][3][3];  /*立方体をイメージ*/
	int length           = 0;
	int wideth           = 0;
	int floor            = 0;
	int number			 = 1; /*1スタートなので、初期値は1。*/

	for (floor = 0; floor < 3; floor++) {
		for (length = 0; length < 3; length++) {
			for (floor = 0; floor < 3; floor++) {
				box[length][wideth][floor] = 0;			/*配列の初期化*/
			}
		}
	}

	for (floor = 0; floor < 3; floor++) {
		for (length = 0; length < 3; length++) {
			for (wideth = 0; wideth < 3; wideth++, number++) {
				box[length][wideth][floor] = number;		/*numberは1～27まで続くのでリセットしない。*/
				printf("%d\n", box[length][wideth][floor]);
			}
		}
	}

	return 0;
}