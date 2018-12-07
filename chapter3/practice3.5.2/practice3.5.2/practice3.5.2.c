/*以下のメニュー表を作成し、doループで正しい応答を受け取るプログラム*/
/*
住所録メニュー
1.住所を入力する
2.住所を削除する
3.リストを検索する
4.リストを印刷する
5.終了する
*/

#include<stdio.h>

int main(void)
{
	int select = 0;

	do {
		printf("住所録メニュー\n1.住所を入力する\n2.住所を削除する\n3.リストを検索する\n4.リストを印刷する\n5.終了する\nご希望の番号をお選びください。\n");
		scanf_s("%d", &select);

		if (select == 1) {
			printf("住所を入力します。\n続けますか？\nはい:0 いいえ:5\n");
			scanf_s("%d", &select);
		}
		else if (select == 2) {
			printf("住所を削除します。\n続けますか？\nはい:0 いいえ:5\n");
			scanf_s("%d", &select);
		}
		else if (select == 3) {
			printf("リストを検索します。\n続けますか？\nはい:0 いいえ:5\n");
			scanf_s("%d", &select);
		}
		else if (select == 4) {
			printf("住所を削除します。\n続けますか？\nはい:0 いいえ:5\n");
			scanf_s("%d", &select);
		}
		else if (select == 5) {
			;
		}
	} while (select != 5);

	printf("メニューを終了します。ありがとうございました。\n");

	return 0;
}