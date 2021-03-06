/*練習問題10.5.1
double型と8バイトの文字配列で共用体を作る。
double型の値をディスクファイルに1文字ずつ出力する関数を作成し、
ファイルから値を読み込み、同じ共用体を使って値を復元する関数を作成する。*/

#include<stdio.h>
#include<stdlib.h>

/*ファイルに入力する関数*/
void save(FILE* p_practice10_5_1, union code *p_double_number)
{
	int count = 0;

	if (fopen_s(&p_practice10_5_1, "practice10_5_1", "w") != 0) {
		printf("ファイル読み込みエラー\n");
		exit(1);
	}
	else {
		printf("ファイルが正常に読み込まれました。\n");
		for (count = 0; count < 8; count++) {
			fscanf_s(p_practice10_5_1, "%c", p_double_number);
		}
		fclose(p_practice10_5_1);
	}
	return 0;
}

/*ファイルから出力する関数*/
void read(FILE* p_practice10_5_1)
{
	int count = 0;
	double number = 0;

	if (fopen_s(&p_practice10_5_1, "practice10_5_1", "r") != 0) {
		printf("ファイル読み込みエラー\n");
		exit(1);
	}
	else {
		printf("ファイルが正常に読み込まれました。\n");
		for (count = 0; count < 8; count++) {
			fprintf(p_practice10_5_1, "%lf", number);
			fclose(p_practice10_5_1);
		}
	}
	return 0;
}

int main(int argc, char* argv[])
{	
	FILE* p_practice10_5_1;
	

	double_number.number = 0.0;

	if (argc != 2) {
		prinf("仮引数エラーです。\n");
		prinf("プログラムを終了します。\n");
		exit(1);
	}
	else {
		printf("プログラムを実行します。\n");
	}
	p_double_number = &double_number;
	/*ポインタを使って共用体に値を代入*/
	p_double_number->number = 10.0;
	/*共用体を関数に渡す*/
	save(p_practice10_5_1, p_double_number);
	
	read(p_practice10_5_1);

	return 0;
}