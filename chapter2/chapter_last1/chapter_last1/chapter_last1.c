/*
数当てゲームのプログラム
<ルール>
1 プレイヤーは事前に決められた"謎の数"を10回以内に当てる。
2 もし正解すると「正解！」と表示される。
3 入力した数字と謎の数が一致しなかった場合は、その二つの間の大小関係が表示される。
*/

#include<stdio.h>

int main(void)
{
  int number = 0;
  int magic_number = 157;
  int count = 10;

  printf("数当てゲームを行います。\n事前に設定された\"謎の数\"を当てるゲームです。\nチャンスは10回です。\n\n");

  for (count = 10; (count > 0) && (number != magic_number) ; count--) {    /*&&にすると、両方真の時だけ、ループが起こる。つまり、片方でも成り立たなくなったらループが終わる。*/
	  printf("あと%d回チャレンジできます。\n数字を入力してください。\n", count);
	  scanf_s("%d", &number);

	  if (number > magic_number) {
		  printf("違います！謎の数字は、入力された数字よりも小さい数字です。\n\n");
	  }

	  if (number < magic_number) {
		  printf("違います！謎の数字は、入力された数字よりも大きい数字です。\n\n");
	  }

	  if (number == magic_number) {
		  printf("大正解！答えは%dでした！\n", magic_number);
	  } 
	}

  if (count <= 0) {
	  printf("残念！10回以内に正解できませんでした。\nまたチャレンジしてください！\n");
  }

  return 0;
}