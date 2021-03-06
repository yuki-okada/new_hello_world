/*A-Zとa-zまでの文字のASCIIコードを表示するプログラム*/

#include<stdio.h>

int main(void)
{
	char large_alphabet;
	char small_alphabet;

	for (large_alphabet = 'A'; large_alphabet <= 'Z'; large_alphabet++) {		/*文字は対応するASCIIコードごとに数字が大きくなっていくため、++で順にループできるのではないか*/
		printf("%cのASCIIコードは%dです。\n", large_alphabet, large_alphabet);	/*char型は小さな整数として使用できる。%dとすることでASCIIコードを表示できる。*/
	}

	for (small_alphabet = 'a'; small_alphabet <= 'z'; small_alphabet++) {
		printf("%cのASCIIコードは%dです。\n", small_alphabet, small_alphabet);
	}
}