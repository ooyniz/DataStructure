#include <stdio.h>
#define M 500001;
int a[M];

int main() 
{
	int i, n, k;
	scanf("%d", &n);
	for(i = 1 ; i<=n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);

	int l = 1, r = n, mid;

	while (l <= r) {
		mid = (l + r)/2;
		if (a[mid] == k) { // 자료를 찾았으면 출력하고 리턴
			printf("%d", mid);
			return 0;
		} else if (a[mid] > k) { // 중간값이 찾는 값보다 큰 경우
			r = mid - 1; 
		} else { // 중간값이 찾는 값보다 작은 경우
			l = mid + 1;
		}
	}
	printf("not found"); // 못 찾았을 때 출력값
	return 0;
}
