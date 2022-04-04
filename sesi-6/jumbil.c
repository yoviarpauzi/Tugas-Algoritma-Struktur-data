#include<stdio.h>
#define N 12
int main(){
    int a[N] = {2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4};
    int b, c = 0;
    printf("Inputkan banyaknya nilai yang akan dicari : ");
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