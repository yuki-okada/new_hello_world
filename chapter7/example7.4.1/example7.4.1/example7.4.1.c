/*
例7.4.1 main関数の引数について
argcとargv
ライブラリ関数
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int number           = 0;
	double decimal       = 0.0;
	long int long_number = 0;

	number      = atoi(argv[1]);
	long_number = atol(argv[2]);
	decimal     = atof(argv[3]);

	printf("%d  %ld  %lf", number, long_number, decimal);

	return 0;
}