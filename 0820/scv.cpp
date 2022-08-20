/*
오른쪽이나 아래쪽으로만 이동할 수 있기 때문에
Dynamic으로 분류됨
*/

#include <stdio.h>
#include <algorithm>
using namespace std;
#define M 101
int map [M][M];
int n;

int main() 
{
	int i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) { // dp 초기화를 위해 1번방부터 저장
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			map[i][j] += max(map[i-1][j], map[i][j-1]); 
			// 위쪽, 오른쪽에서 온 자료 중 max 값
		}
	}

	printf("%d", map[n][n]);

	return 0;
}
