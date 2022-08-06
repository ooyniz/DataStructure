#include <stdio.h>
#define M 100010
int a[M], dab;
#include <algorithm>
using namespace std;

int main() 
{
	int i, n, c, C, hit;
	scanf("%d%d", &n, &c); // 우리 수, 소의 수
	for (i = 0; i<n; i++) { // 우리의 정보 입력 (정렬되지 않음)
		scanf("%d", &a[i]);
	}
	sort(a, a+n); // 우리의 정보 오름차순으로 정렬

	int l = 0, r = 1000000000, mid; // r이 10억인 이유 = 떨어진 거리를 max로 설정
	while (l <= r) {
		mid = (l + r)/2; // 우리의 간격 결정
		C = c - 1;
		hit = a[0] + mid;
		for (i = 1; i < n; i++) {
			if (a[i] >= hit) { 
				C--; // 한 개씩 배치할 때마다 소의 수 줄여줌
				hit = a[i]+ mid;
			}
			if (C == 0) { // 소를 다 배치할 수 있으면 답에 저장
				dab = mid;
				break;
			}
		}
		if (C == 0) l = mid + 1; // 소를 다 배치할 수 있으면 크기 늘임
		else r = mid - 1; // 소를 배치할 수 없으면 크기 줄임
	}
	printf("%d", dab);
	return 0;
}
