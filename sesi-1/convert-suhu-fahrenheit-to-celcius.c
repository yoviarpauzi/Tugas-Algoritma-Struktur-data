#include<stdio.h>
int main(){
    // Program convert suhu fahrenheit ke celsius
    float fahrenheit, celcius;
    printf("Inputkan suhu fahrenheit : ");
    scanf("%f", &fahrenheit);
    celcius = ((fahrenheit - 32.0) * 5.0 / 9.0);
    printf("Hasil convert suhu = %.2f°C\n", celcius);
    return 0;
}