#include <stdio.h>

//������1> �迭�� ���̸� �˾ƾ����� ó�� ����
//������2> �Լ� ���ο� ����� ���� �迭�� ����Ǹ� ��� �� ��(���� ���� �迭)
//-> �ذ���: �Լ� �������� �迭�� ������ ������ �����Ҵ����� �迭 ����
int* solution() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//�����迭, �Լ� �� ��� ����, �Լ� �ۿ��� ��� ����(�����迭)
	return arr; //�迭 ����
}

int main() {
	int* result;
	result = solution();
	for (int i = 0; i < 10; i++) {
		printf("%d", result[i]);
	}
}