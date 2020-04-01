#include <stdio.h>

void main() {

	int i, j, key, temp,r;
	int num[10];


	//랜덤값 
	printf("랜덤값 출력\n");
	for (i = 0; i < 10; i++) {

		num[i] = rand() % 20;
		
		printf("%d ", num[i]);

	}



	//최소값찾기

	for (int i = 0; i < 9; i++) {
		int min = i;

		for (int j = i + 1; j < 10; j++) {

			if (num[min] > num[j]) {
				min = j;
			}

		}

		temp = num[i];
		num[i] = num[min];
		num[min] = temp;

	}
	

	printf("정렬 후 값\n");
	for (int i = 0; i < 9; i++) {

		printf("%d", num[i]);
	}


}