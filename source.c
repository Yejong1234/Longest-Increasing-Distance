#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dp[100];//���� �迭 ����

int main() {
	int n,i,j;//���� ���� ����
	int arr[1000];//���� array ����2
	int length=1;//����
	int max;
	
	scanf("%d", &n);//���� ������ �ްڽ��ϴ�.

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);//�迭�� ���??
	}
	dp[0] = 1;

	max = arr[0];

	for (i = 1; i < n; i++) {
		if (arr[i] > max) {//���� arr[i]�� ���ݱ����� �ִ밪���� ũ�ٸ�. dp���� 1�� ���������ش�. 
			dp[i] = dp[i - 1] + 1;
			max = arr[i];//max�� �������� �ش�.
		}
		else
			dp[i] = dp[i - 1];//�ƴϸ� �׳� �״��~
	}

	printf("%d\n", dp[n - 1]);
}

