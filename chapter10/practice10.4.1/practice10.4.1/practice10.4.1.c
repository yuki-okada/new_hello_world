/*練習問題10.4.1
a,b,cの3つのビットフィールドをもつ構造体を使用し、適当に値を代入する。
a,bは3ビット、cは2ビットとする。*/

#include<stdio.h>

int main(int argc, char* argv[])
{
	struct integer {
		unsigned int a : 3;	/*aに3ビット割り振り(数字なら8まで)*/
		unsigned int b : 3;	/*bに3ビット割り振り(数字なら8まで)*/
		unsigned int c : 2; /*cに2ビット割り振り(数字なら4まで)*/
	}number;

	number.a = 7;
	number.b = 6;
	number.c = 3;
	
	printf("%u %u %u", number.a, number.b, number.c);

	return 0;
}
