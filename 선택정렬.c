#include <stdio.h>

int main(void) {


    int num[10];
    int i,temp,j,k;


    printf("선택 정렬 전 랜덤 함수 \n");

    for (i = 0; i < 10; i++) {

        k = rand() % 10; //0~9
        num[i] = k;
        printf("%d ",num[i]);
     
    }
    
    printf("\n");

    for (j = 0; j < 10; j++) {


        for (i = 0; i < 9; i++) {

            if (num[i] > num[i + 1]) { //앞의 숫자가 뒤의 숫자보다 크면 뒤로 1칸 보낸다

                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;

               
            }

        }


    }

    printf("\n===========================\n");

    printf("선택 정렬 후 값은 \n");

    for (i = 0; i < 10; i++) {
        
        printf("%d ",num[i]);

    }




}