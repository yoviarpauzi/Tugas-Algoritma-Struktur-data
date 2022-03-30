#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    menu : 
    printf("Inputkan nilai : ");
    scanf("%i", &n);
    if (n >= 0 && n <= 60){
        printf("Tidak lulus\n");
    }else if(n > 60 && n <= 100){
        printf("Lulus\n");
    }else{
        system("clear");
        goto menu;
        printf("Nilai tidak valid!\n");
    }
    return 0;
}