/*練習問題12.1.1
教科書P360のRANGEマクロを修正せよ*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define RANGE(number, min, max) ((number)<(min))||((number)>(max))?1:0

int main(int argc, char* argv[])
{
	int integer = 0;

	/*1～100までの数字を無作為に抽出*/
	for (; _kbhit() == 0;) {
		for (; RANGE(integer, 1, 100) == 1;) {
			integer = rand();
		}
		printf("%d\n", integer);
	}

	return 0;
}