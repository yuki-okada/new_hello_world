#include<stdio.h>

int	main(void)
{
	int	number1 = 0;
	int	number2 = 0;
	int number3 = 0;

	printf("第1の数字を入力してください。\n");
	scanf_s("%d", &number1);
	
	printf("第2の数字を入力してください。\n");
	scanf_s("%d", &number2);

	/*関係演算*/
	printf("number1 < number2 %d\n", number1 < number2);
	printf("number1 <= number2 %d\n", number1 <= number2);
	printf("number1 == number2 %d\n", number1 == number2);
	printf("number1 > number2 %d\n", number1 > number2);
	printf("number1 >= number2 %d\n", number1 >= number2);

	/*論理演算*/
	printf("number1 && number2  %d\n", number1 && number2);
	printf("number1 || number2  %d\n", number1 || (number2 && number3));
	printf("!number1 !number2  %d %d\n", !number1, !number2);

	return	0;
}