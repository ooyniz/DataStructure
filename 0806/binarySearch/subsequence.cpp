#include <stdio.h>
#define M 100010
int a[M], dab;

int main() 
{
	int i, n, s, q, t, sum = 0;
	scanf("%d%d", &n, &s); // 수열의 개수, 연속적인 합 입력
	
  for(i = 1; i<=n; i++) { // 첫 번째부터 하나씩 더해가며 배열에 저장
		scanf("%d", &t);
		sum += t;
		a[i] = sum;
	}

	int l = 1, r = n, mid;
  
	while(l<=r) { // l이 r보다 크거나 같다면 break;
		int hit = 0; // seek 변수
		mid = (l + r)/2; // 중간 구간을 결정
    
		for (i = mid; i<=n; i++) { // 묶이면 답에 저장 (중간값부터 실행)
			if(a[i]-a[i-mid] >= s) { // 배열의 i값 - 배열의 i-mid값이 s보다 크거나 같다면 (구간 결정)
				dab = mid; // 답을 중간값으로 결정
				hit = 1; // hit 를 1로 설정 (묶이는지 안 묶이는지 결정하는 변수)
				break;
			} // end of if
    } // end of for
    
		if (hit == 1) r = mid - 1; // 묶이면 크기 줄임
		else l = mid + 1; // 묶이지 않으면 크기 늘림
	
  } // end of while
  
	printf("%d\n", dab);
  
	return 0;
} // end of main
