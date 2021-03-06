/*練習問題11.3.1
教材の例11.3.1と11.3.2を実行してください。*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void example_11_3_1(void)
{
	/*列挙型を作る*/
	enum computer { keyboard, CPU, screen, printer };

	/*列挙型compを定義*/
	enum computer comp;

	comp = CPU;

	printf("%d\n", comp);
}

void example_11_3_2(void)
{
	/*列挙型を定義しtpを宣言*/
	enum transport {car, train, airplane, bus} tp;

	printf("キーを押して移動手段を選んでください。\n");
	while (_kbhit() != 0) {
		rand();
	}
	_getch();
	tp = rand() % 4;
	switch (tp) {
		case car:
			printf("車\n");
			break;
		case train:
			printf("電車\n");
			break;
		case airplane:
			printf("飛行機\n");
			break;
		case bus:
			printf("バス\n");
			break;
	}
}

int main(int argc, char* argv[])
{
	example_11_3_1();
	
	example_11_3_2();

	return 0;
}