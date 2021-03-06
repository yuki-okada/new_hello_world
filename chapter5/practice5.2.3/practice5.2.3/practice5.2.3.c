/*
ユーザに文字列の入力を繰り返し求め、それをbig_stringに連結していく。
入力されるたびに、各文字列の末尾に改行文字を付加する。
ユーザーがquitと入力するか、big_stringがあふれてしまったら入力処理を終了する。
入力処理を終えたら、bigstringを表示する。
*/

#include<stdio.h>
#include<string.h>

int main(void) {
	char big_string[200] = "";
	char add_string[60] = "";

	for (;;) {
		printf("英語の文字列の入力を繰り返し要求します。入力された文字列をすべて表示します。\n終了したい場合は、quitの文字列を入力してください。\n");
		gets(add_string);				/*追加する文字列を入力*/

		if (!strcmp(add_string,"quit")) {		/*もし入力された文字列がquitなら終了*/
			break;
		}
		else if (strlen(big_string) + strlen(add_string) >= 200) {      /*あふれちゃった場合*/
			printf("入力できる文字数が最大に達しました。これ以上入力できません。\n今までの文字列を表示します。\n");
			break;
		}
		else {							/*そうじゃなかったら処理を実行*/
			strcat_s(add_string, sizeof(add_string), "\n");
			strcat_s(big_string, sizeof(add_string), add_string);
		}
	}
	printf(big_string);

	return 0;
}