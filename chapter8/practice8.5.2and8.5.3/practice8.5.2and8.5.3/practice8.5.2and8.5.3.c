/*練習問題8.5.2と8.5.3
「セール品：値札の4割引き」をprintf関数で出力してください。
「1023.03」を小数点以下が2桁になるように出力してください。
*/

#include<stdio.h>

int main(int argc, char* argv[])
{
	float number = 1023.03;

	printf("セール品：値札の4割引き");
	printf("\n");
	printf("%.2f", number);

	return 0;
}