/*練習問題12.6.3
関数ポインタの練習
四則演算に余りを求める演算を加えた5つの演算を行う関数をそれぞれ作成し、関数ポインタを用いて呼び出すプログラム*/

#include<stdio.h>

/*足し算の関数*/
int sum(int value1, int value2)
{
	return value1 + value2;
}

/*引き算の関数*/
int sub(int value1, int value2)
{
	return value1 - value2;
}

/*掛け算の関数*/
int mul (int value1, int value2)
{
	return value1 * value2;
}

/*割り算の関数*/
int div(int value1, int value2)
{
	return value1 / value2;
}

/*余りを求める関数*/
int mod(int value1, int value2)
{
	return value1 % value2;
}

int main(int argc, char* argv[])
{
	/*この変数を関数ポインタの変数と連動*/
	int select = 0;

	int result = 0;
	int value1 = 0;
	int value2 = 0;
	
	/*関数ポインタを定義*/
	int(*p_calculation[5])(int value1, int value2);

	/*各関数のアドレスを取得する*/
	p_calculation[0] = sum;
	p_calculation[1] = sub;
	p_calculation[2] = mul;
	p_calculation[3] = div;
	p_calculation[4] = mod;

	printf("入力された2つの数字に対して四則演算の結果を表示します。\n");
	
	printf("1つ目の数字を入力してください。\n");
	scanf_s("%d", &value1);
	printf("2つ目の数字を入力してください。\n");
	scanf_s("%d", &value2);

	printf("演算を選択してください。\n");
	printf("足し算　　　：0\n");
	printf("引き算　　　：1\n");
	printf("掛け算　　　：2\n");
	printf("割り算　　　：3\n");
	printf("剰余を求める：4\n");

	scanf_s("%d", &select);

	result = (*p_calculation[select])(value1, value2);

	printf("結果は%d", result);

	return 0;
}
