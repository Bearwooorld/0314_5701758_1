#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x = 0;
	int sum = 0; // �Ҽ��� ��
	clock_t start, stop;
	double duration;

	start = clock(); //�ð� ���� ����
	for (int i = 2; i <= 100; i++) { //100������ �Ҽ� ��� ���ϱ�
		for (x = 2; x < i; x++) {
			if (i % x == 0)
				break;
		}
		if (x == i)
			sum += x;
	}
	stop = clock(); //�ð� ���� ��
	duration = (double)(stop - start); // ������ �ð��� �� ���
	printf("0���� 100���� ���� �Ҽ��� ���� %d \n", sum);
	printf("�Ҽ��� �� ���α׷� ���� �ð��� %f", duration);
}