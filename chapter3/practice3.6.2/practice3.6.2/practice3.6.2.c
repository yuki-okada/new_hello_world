/*キーボードから入力された文字に相当するASCIIコードの個数"."を表示するプログラム*/

#include<stdio.h>

int main(void)
{
	char alphabet; 
	int number = 0;


	printf("アルファベットを入力してください。\nアルファベットに相当するASCIIコードの個数、\".\"を表示します。\n");
	for (number = 1; number <= 10; number++) {
		alphabet = getchar();


		for (; alphabet > 0; alphabet--) {	/*ASCIIとして読み取っているため、--が使える。*/
			printf(".");
		}
	}

	return 0;
}