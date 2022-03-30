#include <stdio.h>
int main(){
    float r, c;
    printf("Inputkan suhu °R : ");
    scanf("%f", &r);
    c = (5.0 / 4.0) * r;
    printf("Hasil convert suhu reamur ke celcius = %.2f°C\n", c);
    return 0;
}