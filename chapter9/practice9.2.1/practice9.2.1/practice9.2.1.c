/*練習問題9.2.1
コマンドライン引数で指定したテキストファイルの内容を表示するプログラム
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	FILE** pp_file = NULL;	/*これはNULLで初期化?*/
	char check = 0;


	/*引数の確認*/
	if (argc != 2) {
		printf("ファイル名の指定がありません。\n");
		printf("はじめからやり直してください。\n");
		exist(1);
	}
	else {
		if ( fopen_s(pp_file, argv[1], "r") == NULL ){
			printf("ファイルの読み込みに失敗しました。");
			exist(1);
		}
		else {
			while ((check = fgetc(pp_file)) != EOF) {
				printf("%c", check);
			}
		fclose(pp_file);
		}
	}

	return 0;
}