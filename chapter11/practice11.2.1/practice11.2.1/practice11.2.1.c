/*練習問題11.2.1
バージョン管理番号を保持するプログラム*/

#include<stdio.h>

const double version = 6.02;	/*複数のファイルからアクセスする可能性があるためグローバル変数で宣言*/

int main(int argc, char* argv[])
{
	printf("本プログラムのバージョンは%.2lfです。", version);

	return 0;
}