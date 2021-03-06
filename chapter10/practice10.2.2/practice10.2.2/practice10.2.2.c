/*練習問題10.2.2
日本時間と世界時間を表示するプログラム*/

#include<stdio.h>
#include<time.h>	/*time構造体を使用するためインクルード*/

int main(int argc, char* argv[])
{
	/*構造体を定義*/
	struct tm japan_time;
	struct tm world_time;

	/*構造体へのポインタを作成し、構造体のアドレスを取得*/
	struct tm *p_japan_time;
	struct tm *p_world_time;

	p_japan_time = &japan_time;
	p_world_time = &world_time;


	/*time()関数用に変数を設定*/
	time_t japan = 0;
	time_t world = 0;



	/*time関数を用いて、変数にカレンダー(符号化された)時刻を返す*/
	japan = time(NULL); 
	world = time(NULL);

	/*符号化された時刻を関数を使って変換する*/
	localtime_s(p_japan_time, &japan);	/*p_japan_timeは構造体へのポインタだから&いらない。*/
	gmtime_s(p_world_time, &world);

	printf("日本標準時\n");
	printf("日付：%.2d/%.2d/%.2d\n", p_japan_time->tm_year + 1900, p_japan_time->tm_mon + 1, p_japan_time->tm_mday);
	printf("時刻：%.2d：%.2d：%.2d\n\n", p_japan_time->tm_hour, p_japan_time->tm_min, p_japan_time->tm_sec);

	printf("世界標準時\n");
	printf("日付：%.2d/%.2d/%.2d\n", p_world_time->tm_year + 1900, p_world_time->tm_mon + 1, p_world_time->tm_mday);
	printf("時刻：%.2d：%.2d：%.2d\n", p_world_time->tm_hour, p_world_time->tm_min, p_world_time->tm_sec);

	return 0;
}