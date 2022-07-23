// 재귀함수
#include<stdio.h>

void pro(int v) {
	printf("%d", v);
	if( v == 5 ) return;
	pro(v+1);
}

int main()
{
	pro(1);	
	return 0;
}
