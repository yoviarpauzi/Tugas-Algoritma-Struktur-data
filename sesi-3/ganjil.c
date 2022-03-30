#include <stdio.h>
int main(){
    int n;
    printf("Menampilkan deret bilangan ganjil dari 1 - : ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            if(i == n || i == n - 1){
                printf("%i", i);
            }else{
                printf("%i, ", i);
            }
        }
    }
    printf("\n");
    return 0;
}