//1000번
#include <stdio.h>

int main() {
	int A;
	int B;
	int sum;

	//보안이 중요한 프로그램에서 사용 권장
	scanf_s("%d %d", &A, &B);
	//Visual Studio 에서는 에러남
	scanf("%d %d", &A, &B);
	sum = A + B;
	printf("%d", sum);

	return 0;
}

