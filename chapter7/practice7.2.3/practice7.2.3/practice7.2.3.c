/*練習問題7.2.3
再帰関数を用いて画面に文字列を表示するプログラム
文字を1文字ずつ表示する
*/
#include<stdio.h>
#include<string.h>
#define character_count 100

/*関数プロトタイプ*/
void display(char string[character_count], int count);	/*引数が配列*/

int main(void) {
	int count = 0;
	char string[character_count];

	/*配列の初期化*/
	for (count = 0; count < character_count; count++) {
		string[count] = 0;
	}
	count = 0;	/*後で使うのでcountを0に*/

	/*文字列の入力*/
	puts("文字列を入力してください。");
	puts("入力された文字列を出力します。");
	gets(string);

	/*引数を関数に渡す*/
	display(string, count);	/*配列を関数に渡すときは配列名だけでよい*/

	return 0;
}

void display(char string[character_count], int count) {
	/*配列は初期値で0を入れているため、0になったら終わり*/
	if(string[count]){
		printf("%c", string[count]);
		count++;
		display(string, count);
	}
	else {
		printf("\nおわり");
	}
	return 0;
}