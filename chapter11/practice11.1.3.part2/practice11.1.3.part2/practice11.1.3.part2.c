/*練習問題11.1.3
ファイルのリンク
*/

#include<stdio.h>

extern char string[80];	/*他ファイルに関数宣言があることをexternでコンパイラに知らせる。*/

void getname(void)
{
	printf("名前を入力してください。");
	gets(string);
}