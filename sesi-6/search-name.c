#include<stdio.h>
#include<string.h>
#define N 8
int main(){
    int b = 0;
    char data[N][15] = {"siti markonah", "siti marsiah", "siti ryzen", "ahdan", "rio", 
    "agus", "bagus", "muhammad agus"};
    char key[15];
    printf("Daftar nama : ");
    for (int i = 0; i < N; i++){
        if (i == N - 1){
            printf("%s", data[i]);
        }else{
            printf("%s, ", data[i]);
        }
    }
    printf("\n\nInputkan kata kunci : ");
    scanf("%s", &key);
    printf("\nMenampilkan hasil pencarian yang mengandung kata kunci : \n");
    for(int i = 0; i < N; i++){
        if(strstr(data[i], key)){
            b += 1;
            printf("%s\n", data[i]);
        }
    }
    return 0;
}