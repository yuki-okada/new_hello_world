/*練習問題12.7.2
動的なメモリ割り当て
malloc()関数とfree()関数の使用

10個の要素を持つ動的な整数配列を作成し、ポインタ演算または添え字を用いて1から10までの数字を代入し表示したのち、メモリを開放する。*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int count = 0;
	int* p_pointer = NULL;

	/*ポインタにメモりを割り当て*/
	p_pointer = (int*)malloc(10 * sizeof(int)); /*int型の数字(1～10)を代入するから10×*/

	/*配列とみなして、値を代入*/
	for (count = 0; count < 10; count++) {
		p_pointer[count] = count + 1;
		printf("%d\n", p_pointer[count]);
	}

	/*メモリ開放*/
	free(p_pointer);

	return 0;
}