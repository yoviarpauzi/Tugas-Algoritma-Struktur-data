#include <stdio.h>
int main(){
    float volume, jari, tinggi;
    printf("Inputkan jari-jari : ");
    scanf("%f", &jari);
    printf("Inputkan tinggi : ");
    scanf("%f", &tinggi);
    volume = (1.0 / 3.0) * (22.0 / 7.0) * jari * jari * tinggi;
    printf("%.2fcm³\n", volume);
    return 0;
}