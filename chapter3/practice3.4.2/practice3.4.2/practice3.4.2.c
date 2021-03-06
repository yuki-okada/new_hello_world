/*以下のプログラムは簡単な暗号化のプログラムです。

#include<stdio.h>
#include<conio.h>

int main(void)
{
	char alphabet;

	printf("メッセージを入力してください。\n");

	alphabet = getche();                 *while文はループの頭で条件判定するので、まずalphabetの文字を指定
	while (alphabet != '\r' ){  　　　　 * \r = enterキー　が押されない限り、ループをする。
		printf("%c", alphabet + 1 );	 *ここで、入力されたアルファベットを1文字ずらす
		alphabet = getche();			 *forループと違って、インクリメント部がないため、ループの最後で別のアルファベットを入力
	}

	return 0;
}

このプログラムを解読するプログラムを作成せよ。
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
	char alphabet;

	printf("メッセージを解読します。\n暗号化されたアルファベットを入力してください。\nEnterキーを入力すると終了します。\n");

	alphabet = getchar();
	while (alphabet != '\r') {
		printf("%c\n", alphabet - 1);
		alphabet = getchar();
	}

	return 0;
}