/*単位をガロンからリットルに換算するプログラム*/

#include<stdio.h>


int main(void)
{
	float gallon = 0.0;
	int select = 0;

	printf("ガロンをリットルに変換します。\n");

	do {
		printf("ガロン数を入力して下さい。\n");
		scanf_s("%f", &gallon);
		printf("%fガロンは%fリットルです。\n終了しますか\?\n終了する:1 続ける:その他の数字 を入力\n ", gallon, gallon * 3.7854);
		scanf_s("%d", &select);

	}while(select != 1);

	return 0;
}