#include <stdio.h>
#include <stdlib.h>
#define N 2
int main(){
    int a[N][N], b[N][N], i, j;
    system("clear");
    printf("Inputkan nilai matriks pertama : \n\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Inputkan nilai pada baris ke-%i kolom ke-%i : ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
        }
        printf("\n");
    }
    system("clear");
    printf("Inputkan nilai matriks kedua : \n\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Inputkan nilai pada baris ke-%i kolom ke-%i : ", i + 1, j + 1);
            scanf("%i", &b[i][j]);
        }
        printf("\n");
    }
    system("clear");
    printf("Hasil pengurangan dua matriks\n\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%2i ", a[i][j]);
        }
        for (int k = 0; k < N; k++){
            if (i == 0 && k == 0){
                printf(" _");
            }else{
                printf("  ");
            }
        }
        for (int l = 0; l < N; l++){
            printf("%2i ", b[i][l]);
        }
        for (int m = 0; m < N; m++){
            if (i == 0 && m == 0){
                printf(" =");
            }else{
                printf("  ");
            }
        }for (int n = 0; n < N; n++){
            printf("%2i ", a[i][n] - b[i][n]);
        }
        printf("\n");
    }
    return 0;
}
