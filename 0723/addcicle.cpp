// 전역변수 sum 사용
#include<stdio.h>

int sum = 0;

void pro(int v) {
	sum += v;
	if( v == 5 ) {
		printf("%d", sum);
		return;
	}
	pro(v+1);
}

int main()
{
	pro(1);	
	return 0;
}

// 전역변수 sum 사용 x
#include<stdio.h>

void pro(int v, int sum) {
	if( v == 6 ) {
		printf("%d", sum);
		return;
	}
	pro(v+1, sum+v);
}

int main()
{
	pro(1, 0);	
	return 0;
}
