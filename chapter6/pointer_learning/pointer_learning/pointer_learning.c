/*ポインタを理解するためにいろいろためそう。*/

#include<stdio.h>

int main(void) {
	int* p = NULL;
	int  q[] = {1,20,300,4000};

	p = q;	/*qのアドレスを保持*/

	printf("整数ポインタpとint型変数配列qを作成し、q[0]=1.q[1]=20,q[2]=300,q[3]=4000を代入した。\n");
	printf("その後、pがqのアドレスを保持した。そのときの各値は、\n\n");

	printf("qの値:%d　　*pの値:%d　　pの値:%d\n\n", q, *p, p);
	printf("qのアドレス:%p　　*pのアドレス:%p　　pのアドレス:%p\n\n", q, *p, p);

	printf("次の指示を与える：p+1\n");
	p++;

	printf("qの値:%d　　*pの値:%d　　pの値:%d\n\n", q, *p, p);
	printf("qのアドレス:%p　　*pのアドレス:%p　　pのアドレス:%p\n\n", q, *p, p);

	printf("次の指示を与える：*(p+1)\n");
	*p++;

	printf("qの値:%d　　*pの値:%d　　pの値:%d\n\n", q, *p, p);
	printf("qのアドレス:%p　　*pのアドレス:%p　　pのアドレス:%p\n\n", q, *p, p);

	printf("次の指示を与える：(*p)+1\n");
	(*p)++;

	printf("qの値:%d　　*pの値:%d　　pの値:%d\n\n", q, *p, p);
	printf("qのアドレス:%p　　*pのアドレス:%p　　pのアドレス:%p\n\n", q, *p, p);

	return 0;

}