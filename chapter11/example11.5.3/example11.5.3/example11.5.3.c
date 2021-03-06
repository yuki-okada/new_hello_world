/*例題11.5.3
ビット演算子の理解
1の補数演算子*/

#include<stdio.h>
#include<conio.h>

int main(int argc, char* argv[])
{
	char character = 'a';
	int  number    =  0 ;

	/*バイナリ表記する*/
	for (number = 128; number > 0; number = number / 2) {
		if (number & character) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	/*ビットパターンの反転*/
	character = ~character;
	printf("\n");

	/*バイナリ表記する*/
	for (number = 128; number > 0; number = number / 2) {
		if (number & character) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	
	return 0;
}