/*練習問題11.1.3
ファイルのリンク
複数ファイルをコンパイルして処理を実行する。*/

#include<stdio.h>

char string[80];

void getname(void);	/*もう一つのファイルで定義する関数のプロトタイプ*/

int main(int argc, char* argv[])
{
	getname();
	printf("こんにちは%sさん。", string);

	return 0;
}