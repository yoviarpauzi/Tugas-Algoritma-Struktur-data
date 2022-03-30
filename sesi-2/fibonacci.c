#include <stdio.h>
int main(){
    int n, fibo, f0, f1;
    printf("Inputkan nilai : ");
    scanf("%i", &n);
    fibo = 1;
    f1 = 0;
    for (int i = 0; i < n; i++){
        f0 = fibo + f1;
        fibo = f1;
        f1 = f0;
        if (i == n - 1){
            printf("%i", fibo);
        }else{
            printf("%i, ", fibo);
        }
    }
    printf("\n");
    return 0;
}