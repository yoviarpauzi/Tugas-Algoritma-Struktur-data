#include <stdio.h>
int main(){
    int n;
    printf("Inputkan nilai : ");
    scanf("%i", &n);
    if (n == 0){
        printf("Nol\n");
    }else if(n % 2 == 0){
        printf("Bilangan Genap\n");
    }else{
        printf("Bilangan ganjil\n");
    }
    return 0;
}