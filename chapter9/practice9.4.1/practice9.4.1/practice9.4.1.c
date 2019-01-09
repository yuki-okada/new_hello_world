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


#define count_name_kanzi 10
#define count_name_gana 20
/*前方参照*/

/*新規登録用の関数*/
int sign_up(void)
{
	
	FILE* p_phone_list;
	char name_kanji[count_name_kanzi];
	char name_gana[count_name_gana]  ;
	unsigned long int phone_number      = 0;
	int count                     = 0;

	printf("電話帳に氏名/氏名(ふりがな)/電話番号を登録します。\n");
	
	/*登録者の氏名を入力*/
	for (;;) {

		/*氏名入力用の配列の初期化*/
		for (count = 0; count < count_name_kanzi; count++) {
			name_kanji[count] = 0;
		}

		printf("氏名を漢字で入力してください。\n\n");
		gets(name_kanji);

		printf("%sでよろしいですか?\n", name_kanji);
		printf("この名前で登録する：1  入力しなおす；0\n\n");
		scanf_s("%d", &count);
		if (count == 1) {
			break;
		}
		else {
			continue;
		}
	}

	/*登録者の指名(ひらがな)の入力*/
	for (;;) {
		/*氏名(ひらがな)入力用配列の初期化*/
		for (count = 0; count < count_name_gana; count++) {
			name_kanji[count] = 0;
		}

		printf("氏名をひらがなで入力してください。\n\n");
		gets(name_gana);

		printf("%sでよろしいですか?\n", name_gana);
		printf("この名前で登録する：1  入力しなおす；0\n\n");
		scanf_s("%d", &count);
		if (count == 1) {
			break;
		}
		else {
			continue;
		}
	}

	/*電話番号の入力*/
	for (;;) {
		printf("電話番号を入力してください。\n");
		printf("ハイフン(-)は不要です。\n");

		scanf_s("%lu", &phone_number);

		printf("%luでよろしいですか?\n", phone_number);
		printf("この番号で登録する：1  入力しなおす；0\n\n");
		scanf_s("%d", &count);
		if (count == 1) {
			break;
		}
		else {
			continue;
		}
	}

	/*書き込み用にファイルを呼び出す。*/
	if (fopen_s(&p_phone_list, "phone_list", "r") != 0) {
		printf("ファイルを開く際にエラーが発生しました。\n");
		printf("プログラムを終了します。\n");
		exit(2);
	}
	else {
		printf("正常にファイルを開きました。\n");
		printf("入力情報をファイルに書き込みます。");
		fscanf_s(p_phone_list, "%s %s %lu", name_kanji, name_gana, &phone_number);

		/*エラー検査*/
		if (ferror(p_phone_list != 0)) {
			printf("ファイル書き込みエラーです。\n");
			printf("強制終了します。\n");
			exit(3);
		}
		else {
			printf("正常に書き込みが完了しました。\n\n");
		}
	}
	fclose(p_phone_list);

	return 0;
}

/*登録内容の変更用の関数*/
int edit(void)
{
	printf("登録内容の変更用の関数が呼び出されました。\n");
	return 0;
}

/*検索用の関数*/
int search(void)
{
	printf("検索用の関数が呼び出されました。\n");
	return 0;
}

/*一覧表示用の関数*/
int list(void)
{
	printf("一覧表示用の関数が呼び出されました。\n");
	return 0;
}

/*登録内容の削除用の関数*/
int delete(void)
{
	printf("登録内容の削除用の関数が呼び出されました。\n");
	return 0;
}



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
		printf("メニューを選択してください。\n\n");
		for (;;) {
			printf("新規登録　　　　 ：N\n");
			printf("登録内容の変更   ：E\n");
			printf("検索　　　　　　 ：S\n");
			printf("登録内容一覧表示 ：L\n");
			printf("登録内容の削除　 ：R\n");
			printf("\n");

			select = getchar();
			rewind(stdin);

			if (toupper(select) == 'N') {	/*大文字に変換*/
				sign_up();
			}
			else if (toupper(select) == 'E'){
				edit();	/*編集/変更用の関数呼び出し*/
			}
			else if (toupper(select) == 'S') {
				search();/*検索用の関数呼び出し*/
			}
			else if (toupper(select) == 'L') {
				list();	/*一覧表示用の関数呼び出し*/
			}
			else if (toupper(select) == 'R') {
				delete();/*削除用の関数呼び出し*/
			}
			else {
				printf("無効な入力です。はじめからやり直してください。\n\n");
				continue;
			}

			printf("終了しますか?\n");
			printf("はい：Y　　いいえ：N\n\n");
			select = getchar();
			rewind(stdin);

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

