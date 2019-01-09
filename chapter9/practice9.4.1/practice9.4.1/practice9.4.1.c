/* practice9.4.1
電話帳のシステムのプログラム
・新規登録
・編集・変更
・検索
・一覧
・削除
・終了
これらをテキストファイルに保存
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*前方参照*/

/*新規登録用の関数*/
void sign_up(void)
{
	FILE* p_phone_list;
	char name_kanji[10] = { 0,0,0,0,0,0,0,0,0,0 };
	char name_gana[20]  = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	if (fopen_s(&p_phone_list, "phone_list", "r+") != 0) {
		printf("ファイルを開く際にエラーが発生しました。\n");
		printf("プログラムを終了します。\n");
		exit(2);
	}
	else {
		/*書き込んでいくよー*/
	}
}

/*登録内容の変更用の関数*/
void edit(void)
{}

/*検索用の関数*/
void search(void)
{}

/*一覧表示用の関数*/
void list(void)
{}

/*登録内容の削除用の関数*/
void remove(void)
{}



int main(int argc, char* argv[])
{
	char select = 0;

	if (argc != 2) {
		printf("プログラムの引数エラーです。\n");
		printf("はじめからやり直してください。\n");
		exit(1);
	}
	else {
		printf("電話帳システムを開始します。\n");
		printf("メニューを選択してください。\n");
		for (;;) {
			printf("新規登録　　　　 ：N\n");
			printf("登録内容の変更   ：E\n");
			printf("検索　　　　　　 ：S\n");
			printf("登録内容一覧表示 ：L\n");
			printf("登録内容の削除　 ：R\n");

			scanf_s("%c", select);

			switch (toupper(select)) {	/*大文字に変換*/
				case 'N':
					sign();	/*登録用の関数呼び出し*/
					break;
				case 'E':
					edit();	/*編集/変更用の関数呼び出し*/
					break;
				case 'S':
					search();/*検索用の関数呼び出し*/
					break;
				case 'L':
					list();	/*一覧表示用の関数呼び出し*/
					break;
				case 'R':
					remove();/*削除用の関数呼び出し*/
					break;
				default:
					printf("無効な入力です。はじめからやり直してください。\n");
					continue;
			}
			printf("終了しますか?\n");
			printf("はい：Y　　いいえ：N\n");
			scanf_s("%c", &select);
			if (toupper(select) == 'Y') {
				break;
			}
			else {
				continue;
			}
		}
		printf("ご利用ありがとうございました。");
	}
	return 0;
}

