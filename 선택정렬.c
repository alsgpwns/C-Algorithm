#include <stdio.h>

int main(void) {


    int num[10];
    int i,temp,j,k;


    printf("���� ���� �� ���� �Լ� \n");

    for (i = 0; i < 10; i++) {

        k = rand() % 10; //0~9
        num[i] = k;
        printf("%d ",num[i]);
     
    }
    
    printf("\n");

    for (j = 0; j < 10; j++) {


        for (i = 0; i < 9; i++) {

            if (num[i] > num[i + 1]) { //���� ���ڰ� ���� ���ں��� ũ�� �ڷ� 1ĭ ������

                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;

               
            }

        }


    }

    printf("\n===========================\n");

    printf("���� ���� �� ���� \n");

    for (i = 0; i < 10; i++) {
        
        printf("%d ",num[i]);

    }




}