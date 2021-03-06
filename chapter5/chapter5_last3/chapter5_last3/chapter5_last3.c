/*ユーザーから数字のデータを読み取り、最頻値を表示するプログラム*/

#include<stdio.h>

int main(void) {
#define data_count 5
	int data[data_count][2];
	int number         = 0;
	int times          = 0;
	int check_number   = 0;
	int count          = 0;
	int mode           = 0;


	/*配列の初期化*/
	for (number = 0; number < data_count; number++) {
		for (times = 0; times < 2; times++) {
			data[number][times] = 0;
		}
	}

	/*ユーザーからのデータ入力*/
	printf("整数データを%d個入力してください。最頻値(モード)を表示します。\n", data_count);

	for (number = 0; number < data_count; number++) {
		printf("%d個目 :", number + 1);
		scanf_s("%d", &data[number][0]);
		printf("\n");
	}

	/*数字の出てきた回数を記録*/
	for (number = 0; number < data_count; number++) {
		check_number = data[number][0];					/*配列に入力された数を順番にストック*/
		for (count = 0; count < data_count; count++) {  /*ストックした数字と、配列の数字の値をチェック*/
			if (check_number == data[count][0]) {		/*数字が同じだったら、配列の2列目をインクリメントする。(出てきた回数を記録)*/
				data[number][1]++;
			}
		}
	}
	
	/*回数から、最頻値の値を算出*/
	times = data[0][1];        /*配列の1行目の数字の出てきた回数をtimesに代入し、比べていく。それより大きい数があったら入れ替えていく。*/

	for (number = 0; number < data_count; number++) {
		if (times < data[number][1]) {
			times = data[number][1];
		}
	}		
	/*ここで出てきた回数の最大値が分かる。*/

	/*回数の最大値が一致する配列を探して、そこの回数ではなく数字を最頻値(mode)に代入*/
	for (number = 0; number < data_count; number++) {
		if (times == data[number][1]) {
			mode = data[number][0];
			break;
		}
	}

	printf("最頻値は%d", mode);
	
	return 0;
}