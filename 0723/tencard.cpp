// 십자카드
#include<stdio.h>

int chk[10000], dab;

int rchk(int a, int b, int c, int d) {
	return a*1000 + b*100 + c*10 + d;
}

int rotate(int a, int b, int c, int d) { // 시계수 구하는 함수
	int min = 0;
	min = (min > rchk(a, b, c, d)) ? min : rchk(a, b, c, d);
	min = (min > rchk(b, c, d, a)) ? min : rchk(b, c, d, a);
	min = (min > rchk(c, d, a, b)) ? min : rchk(c, d, a, b);
	min = (min > rchk(d, a, b, c)) ? min : rchk(d, a, b, c);
	return min; // 최소값 반환
}

int main()
{
	int n, m, t, i1, i2, i3, i4, A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	m = rotate(A, B, C, D);
	for (i1 = 1; i1<=9; i1++) {
		for (i2 = 1; i2<=9; i2++) {
			for (i3 = 1; i3<=9; i3++) {
				for (i4 = 1; i4<=9; i4++) {
					t = rotate(i1, i2, i3, i4);
					if (chk[t] == 0) {
						chk[t] = 1;
						dab++;
					}
					if (t == m) {
						printf("%d", dab);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
