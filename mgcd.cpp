// 여러수의 최대 공약수
// 일반적인 최대 공약수 구하는 방법 : 작은 수를 찾아 -1씩 하면서 나누기 => 시간복잡도: n
// => 유클리드 호제법( 알고리즘 ) 이용하기
#include<stdio.h>

int n;
int a[110];

int gcd(int v, int w) {
	int t;
	while(1) {
	v = v % w;
	if (v == 0) return w;
	t = v; v = w; w = t; // 두 개의 수 뒤집기
	}
}

int main()
{
	int i;
	scanf("%d", &n); 
	for (i = 0; i<n; i++) {
		scanf("%d", &a[i]);
		if (i >= 1) a[0] = gcd(a[0], a[i]); // 0번 방은 할 필요 x
	}
	printf("%d", a[0]);
    return 0;
}
