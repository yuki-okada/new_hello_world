/*練習問題10.2.2
日本時間と世界時間を表示するプログラム*/

#include<stdio.h>
#include<time.h>	/*time構造体を使用するためインクルード*/

int main(int argc, char* argv[])
{
	struct tm *japan_time; 
	struct tm *world_time;
	/*↑すでに用意されている時間用の構造体を定義しただけで、実際に時間が代入されているわけではない*/

	time_t t_japan;
	time_t t_world;

	/*time関数を用いて、カレンダー時刻(符号化された)を取得*/
	t_japan = time(NULL); 
	t_world = time(NULL);

	/*符号化された時刻を変換して取得*/
	localtime_s(&japan_time, &t_japan);
	gmtime_s(&world_time, &t_world);

	printf("日本標準時\n");
	printf("日付：%.2d/%.2d/%.2d\n", japan_time->tm_year + 2000, japan_time->tm_mon + 1, japan_time->tm_mday);
	printf("時刻：%.2d：%.2d：%.2d\n\n", japan_time->tm_hour, japan_time->tm_min, japan_time->tm_sec);

	printf("世界標準時\n");
	printf("日付：%.2d/%.2d/%.2d\n", world_time->tm_year + 2000, world_time->tm_mon + 1, world_time->tm_mday);
	printf("時刻：%.2d：%.2d：%.2d\n", world_time->tm_hour, world_time->tm_min, world_time->tm_sec);

	return 0;
}