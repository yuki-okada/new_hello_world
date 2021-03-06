/*10個のアルファベットを読み取り、それらをアルファベット順に並べたときに、一番初めに来る文字を表示するプログラム*/

#include<stdio.h>

int main(void)
{
	char alphabet;
	char first = 'z';/*初期値にzを入力し、zと入力されたアルファベットを比べ、小さいものをfirstに変換していく。最後にfirstを表示すればいける！*/
	int count = 10;

	printf("小文字のアルファベットを10個入力してください。\n入力されたアルファベットの中から、アルファベット順で一番初めに来るものを表示します。\n");

	for (count = 10; count > 0; count--) {
		alphabet = getchar();
		
		if (alphabet < first) {
			first = alphabet;
		}
	}
	printf("入力された文字をアルファベット順に並び変えたとき、初めに来る文字は%cです。\n", first);
}