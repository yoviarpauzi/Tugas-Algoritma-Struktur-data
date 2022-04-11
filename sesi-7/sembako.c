#include <stdio.h>
#include <string.h>
#define N 10
int main(){
    char b[N][50] = {"Minyak goreng 1L", "Beras 1L", "Telur 1kg", "Tepung terigu 1kg", 
    "Mie Instant 1pcs", "Gula pasir 1kg", "Garam 1pcs", "Kopi 1 renceng", "Gas elpiji 3kg", 
    "Margarin 200g"};
    float a[N] = {20.000, 11.000, 26.000, 9.750, 5.000, 15.500, 3.000, 13.000, 20.000,
    23.000};
    float temp;
    char temp2[30];
    printf("Data sembako sebelum disorting: \n");
    for(int i = 0; i < N; i++){
        printf("%i. %s Rp.%.3f\n", i+1, b[i], a[i]);
    }
    printf("\nData sembako setelah disorting: \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                strcpy(temp2, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], temp2);
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%i. %s Rp.%.3f\n", i+1, b[i], a[i]);
    }
    return 0;
}