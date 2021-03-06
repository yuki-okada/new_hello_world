/*strcpy()の独自バージョンを作る
char* mystrcpy(char* ターゲット, const char*ソース)
「ターゲット」へのポインタを返すものとする。*/

#include<stdio.h>

char* mystrcpy(char* p_target, const char* p_source)
{
	while (*p_source != 0) {
		*p_target++ = *p_source++;
	}

	return p_target;
}


int main(int argc, char* argv[])
{
	char source[80];
	char target[80];
	char* p_source = NULL;
	char* p_target = NULL;
	int number = 0;

	/*配列の初期化*/
	for (number = 0; number < 80; number++) {
		source[number] = 0;
	}
	for (number = 0; number < 80; number++) {
		target[number] = 0;
	}

	/*アドレスを格納*/
	p_source = source;
	p_target = target;

	printf("文字列を入力してください。\n");
	printf("入力された文字列をコピーします。\n");
	gets(source);

	mystrcpy(p_target,p_source);

	printf("入力された文：%s\n", source);
	printf("コピーした文：%s", target);

	return 0;
}
