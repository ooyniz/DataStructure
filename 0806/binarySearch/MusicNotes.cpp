#include <stdio.h>
#define M 50010
int a[M];

int main() 
{
	int n, m, q, t, i, sum = 0;
	scanf("%d%d", &n, &q); // 악보의 수, 질문
  
	for(i = 1; i<=n; i++) { // 악보의 수만큼 배열 구현 ex) 1 2 5
		scanf("%d", &t);
		sum += t;
		a[i] = sum - 1;
	}

	for (i = 1; i<=q; i++) { // 1부터 q까지의 질문 받기
    
		scanf("%d", &m); // 하나씩 입력 받기 , space bar로 구분하여 입력 (허용되는 규칙)
    
		int l = 1, r = n, mid; 
    
		while(l <= r) { // 이진탐색
			mid = (l+r)/2;
			if(a[mid] == m) {
				l = mid;
				break;
			}
			else if(a[mid] > m) r = mid -1;
			else l = mid + 1;
		}
    
		printf("%d\n", l); // 하나씩 답 출력
	}
	return 0;
}
