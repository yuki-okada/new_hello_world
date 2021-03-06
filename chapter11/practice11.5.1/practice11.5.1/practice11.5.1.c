/*練習問題11.5.1
~演算子を使ってファイルを暗号化するプログラム*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	FILE* p_encryption_before;
	FILE* p_encryption_after;
	char character = 0;

	
	if (argc != 3) {
		printf("ファイル読み込みエラーです。\n");
		printf("<プログラム名><読み込みファイル><書き込みファイル>\n");
		exit(0);
	}
	else {
		printf("ファイル内容を暗号化して出力するプログラムです。\n");
		
		if (fopen_s(p_encryption_before, "encryption_before", "r") != 0) {
			printf("ソースファイル読み込みエラー\n");
			exit(1);
		}
		else {
			printf("ソースファイル読み込み成功\n");
		}
		if (fopen_s(p_encryption_after, "encryption_after", "w") != 0) {
			printf("出力ファイル読み込みエラー\n");
			exit(1);
		}
		else {
			printf("出力ファイル読み込み成功\n");
		}
		while (feof(p_encryption_before) == 0) {
			character = fgetc(p_encryption_before);
			fputc(~character, p_encryption_after);
		}
		fclose(p_encryption_before);
		fclose(p_encryption_after);
	}
	return 0;
}
