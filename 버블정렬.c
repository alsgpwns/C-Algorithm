#include <stdio.h>

int main (void){

	int num[10];
	int i, j, k, temp, ra;


	printf("버블정렬 전 랜덤 값 \n");


	for (k = 0; k < 10; k++) {

		ra = rand() % 20;
		num[k] = ra;
		printf("%d ", num[k]);

	}
		

	
	for (i = 0; i < 10; i++) {

		for (k = 0; k < 9-i; k++) { //뒤에서부터 크기 감소

			if (num[k] > num[k + 1]) { //왼쪽에 있는 값이 오른쪽에 있는 값보다 크다면 위치 변경

				temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;

			}

		}

	}
	

	printf("\n버블정렬 후 값은\n");

	for (k = 0; k < 10; k++) {

		printf("%d ", num[k]);

	}



}