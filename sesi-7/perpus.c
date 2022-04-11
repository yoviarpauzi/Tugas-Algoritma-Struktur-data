#include <stdio.h>
#include <string.h>
#define N 10
int main(){
    char perpus[N][30] = {"Umum", "Filsafat dan Psikologi", "Agama", "Sosial", "Bahasa",
    "Sains dan Matematika", "Teknologi", "Seni dan Rekreasi", "Literatur dan Sastra",
    "Sejarah dan Geografi"};
    char temp[30];
    printf("Kategori buku sebelum di sorting : \n");
    for (int i = 0; i < N; i++){
        printf("%2i. %s\n", i + 1, perpus[i]);
    }
    printf("\nKategori buku setelah disorting : \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (strcmp(perpus[i], perpus[j]) < 0){
                strcpy(temp, perpus[i]);
                strcpy(perpus[i], perpus[j]);
                strcpy(perpus[j], temp);
            }
        }
    }
    for (int i = 0; i < N; i++){
        printf("%2i. %s\n", i+1, perpus[i]);
    }
    return 0;
}