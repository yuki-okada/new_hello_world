/*1から10までカウントするwhileループの機能をgotoで実現するプログラム*/

#include<stdio.h>

int main(void)
{
	int number = 1;

	
	again:
	printf("%d\n", number);
	number++;
	if (number < 11) {
		goto again;
	}
	else {
		printf("終わり。");
	}

	return 0;
}
