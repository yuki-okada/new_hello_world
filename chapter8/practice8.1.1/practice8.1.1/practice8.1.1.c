/*練習問題8.1.1
MAXとCOUNTBYという2つのマクロ名を定義し、0からMAX-1までカウントし、
COUNTBYとして定義した値の倍数のみを表示するプログラム*/

#include<stdio.h>
#define MAX 100
#define COUNTBY 3

/*整数値だからconst int のほうがいいんだろうなぁ*/

int main(void)
{
	int number[MAX];
	int count = 0;

	/*配列の初期化*/
	for (count = 0; count < MAX - 1; count++) {
		number[count] = 0;
	}

	/*0から99までカウントをとる*/
	puts("0から99までカウントをとります。");
	for (count = 0; count < MAX - 1; count++) {
		number[count] = count;
		printf("%d\n", number[count]);
	}

	/*3の倍数のみを表示*/
	puts("カウントした数字から3の倍数を表示します。");
	for (count = 1; count < MAX - 1; count++) {
		if (!(number[count] % COUNTBY)) {
			printf("%d\n", number[count]);
		}
	}

	return 0;
}
