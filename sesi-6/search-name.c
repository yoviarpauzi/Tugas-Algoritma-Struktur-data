#include<stdio.h>
#include<string.h>
#define N 8
int main(){
    int juml, b, c;
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
    b = strlen(key);
    printf("\nMenampilkan data yang mengandung kata kunci : \n");
    for(int i = 0; i < N; i++){
        loop: 
        if (strlen(data[i])>= b){
            for (int j = 0; j <= strlen(data[i]) - b; j++){
                for (int k = 0; k < b; k++){
                    if (key[k] == data[i][k + j]){
                        if(k == b-1){
                            c += 1;
                            printf("%s\n", data[i]);
                            j = 0;
                            i++;
                            if ( i < N)
                                goto loop;
                            else   
                                return 0;
                        }
                    }else
                        break;
                }
            }
        }
    }
    if (c == 0){
        printf("Data tidak ditemukan\n");
    }
    return 0;
}
