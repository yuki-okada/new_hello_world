/*1～100までの奇数を表示するプログラムcontinue文を使用してください。*/

#include<stdio.h>

int main(void)
{
	int number = 0;

	for (number = 1; number < 101; number++) {
		if (number % 2) {
			printf("%d\n", number);
		}
		else {
			continue;
		}
	}

	return 0;
}	