#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main() {
	int num = 0;
	int n;
	int head = 0;
	int mid = 0;
	int bot = 1;
	int sumHarshard = 0;
	scanf_s("%d", &num);
	
	int temp = num;

	while (num >= 1) {
		sumHarshard += num % 10;
		num /= 10;
	}

	if (temp % sumHarshard == 0) {
		printf("�ϻ��� ���Դϴ�");
		return true;
	}
	else {
		printf("����� �����ƴմϴ�", num);
		return false;
	}

	
}