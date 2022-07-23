// 뒤집어 더하기
#include<stdio.h>

int a, b, c;

int rev(int v) {
	int t = 0;
	while(1) {
		if (v == 0) return t; // 결과값 반환 
		t = t*10 + v%10; // t*10 : 한 자리 위로 올리는 역할, v%10 : 맨 끝부터 한 자리 구함
		v /= 10; // 한 자리 버리기
	}
}
int main()
{
	scanf("%d%d", &a, &b); // 12 345 입력받기
	c = rev( rev(a) + rev(b) );
	printf("%d", c);
    return 0;
}
