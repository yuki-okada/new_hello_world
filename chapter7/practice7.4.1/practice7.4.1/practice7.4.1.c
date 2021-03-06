/*
練習問題7.4.1
コマンドラインから2つの引数を受け取り、ASCIIコードでどちらが大きいか報告するプログラム
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	char character1 = 0;
	char character2 = 0;

	/*適正な数のコマンドライン引数が入力されたか確認して処理を行う。*/
	if (argc != 3) {	/*今回は引数が3つ*/
		puts("引数<プログラム名><第一引数><第二引数>");
		puts("引数の数が合いません。もう一度やり直してください。");
		exit(1);		/*プログラムを終了する。*/
	}
	else {
		character1 = atoi(argv[1]);
		character2 = atoi(argv[2]);
		if (character1 > character2) {
			printf("%d", character1);
		}
		else {
			printf("%d", character2);
		}
	}
	return 0;
}