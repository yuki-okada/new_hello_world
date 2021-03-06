/*練習問題9.2.3
テキストファイルを別のテキストファイルにコピーするプログラム
コピー元のファイル、コピー先のファイルの2つのコマンドライン引数を受け取る。*/

#include<stdio.h>

int main(int argc, char* argv[])
{
	FILE* p_file_from;
	FILE* p_file_to;
	char string = 0;
	

	/*コマンドライン引数を確認*/
	if (argc != 3) {
		printf("コマンドライン引数の数が合いません。やり直してください。\n");
		exit(1);
	}
	else {
		printf("コマンドライン引数が正しく入力されました。処理を実行します。\n");
		
		/*コピー元のファイルを開く*/
		if (p_file_from = fopen(argv[1], "r") == NULL) {
			printf("ファイルの読み込みに失敗しました。\n");
			exit(2);
		}
		else {/*ファイルを開くことができたとき*/
			printf("ファイルの読み込みに成功しました。\n");
			/*ファイルのtext内容を保持*/	
		}

		/*コピー先のファイルを開く*/
		if (p_file_to = fopen(argv[2], "w") == NULL) {
			printf("ファイルの読み込みに失敗しました。\n");
			exit(3);
		}
		else {/*ファイルを開くことができたとき*/
			printf("ファイルの読み込みに成功しました。\n");
			/*コピーを行う*/
			if (fputc(string, p_file_to) == EOF) {

			}
		}
		/*テキストをコピーして貼り付け*/
		while (feof(p_file_from) == 0) {
			string = fgetc(p_file_from);
			if (ferror(p_file_from) == 0) {
				if (fputc(string, p_file_to) == EOF) {
					printf("書き込みエラーです。\n");
					exit(4);
				}
			}
			else {
				printf("ファイル読み込みエラーです。\n");
				exit(5);
			}
		}
		fclose(p_file_from);
		fclose(p_file_to);
	}
	return 0;
}