/* practice9.4.1
電話帳のシステムのプログラム
・新規入力
・検索
・一覧
・ファイル書き込み
・終了

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*グローバル変数*/
char  name[100][40];	/*各40文字までを100人登録可能*/
char  number[100][40];
int   tate = 0;
int   yoko = 0;

/*メニュー用の関数*/
int menu(void)
{
	int select = 0;
	for (;;) {
		printf("1：電話番号を新規入力する\n");
		printf("2：電話番号を検索する\n");
		printf("3：入力内容をファイルへ書き込む\n");
		printf("4：ファイルに書き込んだ内容を表示する\n");
		printf("5：終了する\n");
		printf("メニューを選択してください。\n\n");

		scanf_s("%d", &select);
		rewind(stdin);
		if ((select == 1) || (select == 2) || (select == 3) || (select == 4) || (select == 5)) {
			break;
		}
		else {
			printf("無効な入力です。\n");
			printf("有効な数字を入力してください。\n\n"); 
		}
	}
	return select;
}

/*新規登録用の関数*/
int input(void)
{
	int choice = 0;

	printf("電話帳に氏名/電話番号を登録します。\n");
	/*登録者の氏名を入力*/
	for (;;) {
		/*すでに登録されているところに上書きしないように、空の部分を探す*/
		for (tate = 0; tate < 100; tate++) {
			if (name[tate][0] == 0) {
				break;
			}
		}
		if (tate >= 100) {
			printf("登録数が限界まで達しています。\n");
			printf("これ以上登録できません。\n");
			exit(3);
		}
		else {
			printf("氏名を漢字で入力してください。\n");
			gets(name[tate]);
			rewind(stdin);
			printf("%sでよろしいですか?\n", name[tate]);
			printf("1：この名前で登録する  2：入力しなおす\n");
			scanf_s("%d", &choice);
			rewind(stdin);

			if (choice == 1) {
				break;
			}
			else {
				continue;
			}
		}
	}

	/*電話番号の入力*/
	for (;;) {
		/*nameと同じ行数に電話番号を格納する。*/
		printf("電話番号を入力してください。\n");
		printf("ハイフン(-)は不要です。\n");

		gets(number[tate]);
		rewind(stdin);

		printf("%sでよろしいですか?\n", number[tate]);
		printf("1：この番号で登録する  2：入力しなおす\n\n");
		scanf_s("%d", &choice);
		rewind(stdin);

		if (choice == 1) {
			printf("入力が完了しました。\n\n");
			break;
		}
		else {
			continue;
		}
	}

	return 0;
}

/*検索用の関数*/
int search(void)
{
	char search_name[40] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int choice = 0;

	printf("名前から電話番号を検索します。\n");
	for (;;) {
		printf("名前を入力してください。\n");

		gets(search_name);
		rewind(stdin);

		printf("%sで検索します。\n", search_name[tate]);
		printf("1:この名前で検索する  2：入力しなおす\n\n");
		scanf_s("%d", &choice);
		rewind(stdin);

		if (choice == 1) {
			break;
		}
		else {
			continue;
		}

		for (tate = 0; (tate < 100) || strcmp(search_name, name[tate]) != 0; tate++) {
		}
		if (tate == 100) {
			printf("一致する名前がありませんでした。\n");
			printf("はじめからやり直してください。\n\n");
			exit(2);
		}
		else {
			printf("%sさんの電話番号：%s", name[tate], number[tate]);
		}
	}

	return 0;
}

/*ファイル書き込み用の関数*/
int save(void)
{
	FILE* p_phonelist;
	
	/*書き込み用にファイルを呼び出す。*/
	if (fopen_s(&p_phonelist, "phonelist", "w") != 0) {
		printf("ファイルを開く際にエラーが発生しました。\n");
		printf("プログラムを終了します。\n");
		exit(2);
	}
	else {
		printf("正常にファイルを開きました。\n");
		printf("入力情報をファイルに書き込みます。\n");
		
		for (tate = 0; tate < 100; tate++) {
			fscanf_s(p_phonelist, "%s %d", name[tate], number[tate]);
		}
			
		/*エラー検査*/
		if (ferror(p_phonelist) != 0) {
			printf("ファイル書き込みエラーです。\n");
			printf("強制終了します。\n");
			exit(3);
		}
		else {
			printf("正常に書き込みが完了しました。\n\n");
		}
	}
	fclose(p_phonelist);

	return 0;
}

/*一覧表示用の関数*/
int list(void)
{
	FILE* p_phonelist;

	/*書き込み用にファイルを呼び出す。*/
	if (fopen_s(&p_phonelist, "phonelist", "r") != 0) {
		printf("ファイルを開く際にエラーが発生しました。\n");
		printf("プログラムを終了します。\n");
		exit(2);
	}
	else {
		printf("正常にファイルを開きました。\n");
		printf("ファイルに記録されている情報を表示します。\n");

		for (tate = 0; feof(p_phonelist) != 0; tate++) {
			fprintf(p_phonelist, "%s %d", name[tate], number[tate]);
		}

		/*エラー検査*/
		if (ferror(p_phonelist) != 0) {
			printf("ファイル読み込みエラーです。\n");
			printf("強制終了します。\n");
			exit(3);
		}
		else {
			printf("正常に読み込みが完了しました。\n\n");
		}
	}
	fclose(p_phonelist);

	return 0;
}

int main(int argc, char* argv[])
{
	/*変数配列の初期化*/
	for (tate = 0; tate < 100; tate++) {
		for (yoko = 0; yoko < 40; yoko++) {
			name[tate][yoko] = 0;
		}
	}
	for (tate = 0; tate < 100; tate++) {
		for (yoko = 0; yoko < 40; yoko++) {
			number[tate][yoko] = 0;
		}
	}


	if (argc != 2) {
		printf("プログラムの引数エラーです。\n");
		printf("はじめからやり直してください。\n");
		exit(1);
	}
	else {
		printf("電話帳システムを開始します。\n");
		for(;;){
			rewind(stdin);	/*不具合解消のため*/

			if (menu() == 1) {	/*大文字に変換*/
				input();/*新規入力用の関数呼び出し*/
			}
			else if (menu() == 2){
				search();/*検索用の関数呼び出し*/
			}
			else if (menu() == 3) {
				save();/*ファイル書き込み用の関数呼び出し*/
			}
			else if (menu() == 4) {
				list();	/*一覧表示用の関数呼び出し*/
			}
			else if (menu() == 5) {
				break;/*終了*/
			}
			else {
				printf("無効な入力です。はじめからやり直してください。\n\n");
				continue;
			}
		}
		printf("ご利用ありがとうございました。");
	}
	return 0;
}

