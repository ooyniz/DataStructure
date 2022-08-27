#include <stdio.h>

char A[60], B[2][10] = {"YES", "NO"};

int main() 
{
	int i, j, n, k, s;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		k = 0, s = -1;
		scanf("%s", A); // &A[0]과 같은 의미
		for(j = 0; A[j] != 0; j++) { // 0은 종료문자(아스키코드), 종료문자를 만나기 전까지 실행
			if (A[j] == '(') ++s;
			else --s;
			if (s < -1) k = 1; // 잘못된 경우
		}

		if (s > -1) k = 1; // 남아있는 경우
		
		printf("%s\n", B[k]);

	}
	
	return 0;
}
