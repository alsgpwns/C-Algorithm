#include <stdio.h>

int main (void){

	int num[10];
	int i, j, k, temp, ra;


	printf("�������� �� ���� �� \n");


	for (k = 0; k < 10; k++) {

		ra = rand() % 20;
		num[k] = ra;
		printf("%d ", num[k]);

	}
		

	
	for (i = 0; i < 10; i++) {

		for (k = 0; k < 9-i; k++) { //�ڿ������� ũ�� ����

			if (num[k] > num[k + 1]) { //���ʿ� �ִ� ���� �����ʿ� �ִ� ������ ũ�ٸ� ��ġ ����

				temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;

			}

		}

	}
	

	printf("\n�������� �� ����\n");

	for (k = 0; k < 10; k++) {

		printf("%d ", num[k]);

	}



}