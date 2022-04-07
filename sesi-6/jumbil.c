#include<stdio.h>
#define N 12
int main(){
    int a[N] = {2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4};
    int b, c = 0;
    printf("Data yang ada pada array : ");
    for (int i = 0; i < N; i++){
        if (i == N-1){
            printf("%i", a[i]);
        }else{
            printf("%i, ", a[i]);
        }
    }
    printf("\nInputkan nilai yang akan dicari : ");
    scanf("%i", &b);
    for (int i = 0; i < N; i++){
        if(a[i] == b){
            c += 1;
        }
    }
    if (c > 0){
        printf("Jumlah angka %i pada array ada %i buah\n", b, c);
    }else{
        printf("Nilai %i tidak ada dalam index\n", b);
    }
    return 0;
}