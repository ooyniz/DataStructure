/*
백준 1158번 문제
*/

#include <stdio.h>
#define M 5000
int q[M*M]; // q의 크기

int main() 
{
	int n, m, i, st = 0, ed = 0;
	scanf("%d%d", &n, &m);
	for (i = 1; i<=n; i++) // 큐 초기값
		q[++st] = i;
	printf("<");
	while (st != ed) {
		++ed; //빼낸다
		if (ed%m == 0) { // 찾는 값이면 출력한다
			if (--n) printf("%d, ", q[ed]);
			else printf("%d>", q[ed]);
		} else {
			q[++st] = q[ed]; // 찾는 값이 아니면 다시 큐에 넣어준다
		}
	}
	return 0;
}
