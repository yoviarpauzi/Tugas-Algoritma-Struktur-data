#include <stdio.h>
#define N 25
int main(){
    int a[N] = {85, 65, 56, 78, 89, 92, 88, 58, 60, 75, 79, 84, 93, 90,
    80, 76, 59, 83, 91, 90, 77, 85, 72, 64, 57};
    int median = 0, temp = 0, i, j;
    //proses sorting
    for (i = 0; i < N; i++){
        for(j = 0; j < N - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //mencari median
    median = a[((N + 1) / 2) - 1];
    //menampilkan median
    printf("Nilai mediannya : %i\n", median);
    return 0;
}