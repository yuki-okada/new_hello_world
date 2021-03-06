/*文字列を読み取り、その文字列を逆の順序で表示するプログラム*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	char letter[100];
	int  count   = 0;

	printf("100文字未満の文字列を入力してください。\n入力された文字列を逆の順序で表示します。\n");

	gets(letter);			    /*文字列を格納*/
	count = strlen(letter) + 1;		/*文字列の長さを確認(strlenはヌル文字の分が含まれないので、その分+1する)*/

	for (; count >= 0; count--) {   /*一番後ろから表示していけば良いので、countから1ずつ引いていけば良いはず。*/
		printf("%c", letter[count]);
	}

	return 0;
}