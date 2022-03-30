#include <stdio.h>
#define N 5
int main(){
    char hewan[N][30] = {"Beruk Mentawai", "Elang Flores", "Tarsius", 
    "Jalak Bali", "Harimau Sumatera"};
    char daerah[N][30] = {"Sumatera Barat", "NTT", "Kepulauan Bangka Belitung", 
    "Bali", "Sumatera"};
    printf("Program Menampilkan nama hewan langka dan daerahnya\n");
    for (int i = 0; i < N; i++){
        printf("%i. %s Asal %s\n", i + 1, hewan[i], daerah[i]);
    }
    return 0;
}
