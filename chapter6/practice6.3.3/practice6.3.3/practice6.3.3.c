/*
キーボードから文字列を読み取り、そこにスペースが含まれていることを調べ、
最初のスペースが見つかったところで、文字列の残りの部分を表示するプログラム
*/
#include<stdio.h>

int main(void) {
	char string[100];
	char* character = NULL;
	int initialize  = 0;

	for (initialize = 0; initialize < 100; initialize++) {
		string[initialize] = 0;
	}

	printf("100文字未満の文字列を入力してください。\nもしスペースキーが入力されていれば、1つ目のスペース以降の文章を表示します。\n");
	gets(string);

	character = string; /*アドレスの保持*/

	while (*character && *character != ' ') {
		*character++;
	}

	printf(character);

	return 0;
}