#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dp[100];//동적 배열 선언

int main() {
	int n,i,j;//수열 갯수 변수
	int arr[1000];//수열 array 선언2
	int length=1;//길이
	int max;
	
	scanf("%d", &n);//수열 갯수를 받겠습니다.

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);//배열값 어떻게??
	}
	dp[0] = 1;

	max = arr[0];

	for (i = 1; i < n; i++) {
		if (arr[i] > max) {//만약 arr[i]가 지금까지의 최대값보다 크다면. dp값을 1개 증가시켜준다. 
			dp[i] = dp[i - 1] + 1;
			max = arr[i];//max도 증가시켜 준다.
		}
		else
			dp[i] = dp[i - 1];//아니면 그냥 그대로~
	}

	printf("%d\n", dp[n - 1]);
}

