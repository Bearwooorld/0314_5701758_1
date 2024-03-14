#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x = 0;
	int sum = 0; // 소수의 합
	clock_t start, stop;
	double duration;

	start = clock(); //시간 측정 시작
	for (int i = 2; i <= 100; i++) { //100까지의 소수 모두 더하기
		for (x = 2; x < i; x++) {
			if (i % x == 0)
				break;
		}
		if (x == i)
			sum += x;
	}
	stop = clock(); //시간 측정 끝
	duration = (double)(stop - start); // 측정한 시간의 값 계산
	printf("0부터 100까지 더한 소수의 합은 %d \n", sum);
	printf("소수의 합 프로그램 실행 시간은 %f", duration);
}