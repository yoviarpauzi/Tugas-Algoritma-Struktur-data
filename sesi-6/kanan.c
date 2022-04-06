#include<stdio.h>
int main(){
  int a[] = {2, 3, 4, 1, 2 , 3, 1, 4, 7, 8, 9, 4};
  int b = sizeof(a)/sizeof(a[0]);
  int cari, c = 0, d = 0;
  printf("Data pada array : ");
  for(int i = 0; i < b; i++){
    printf("%i ", a[i]);
  }
  printf("\nInputkan nilai yang akan dicari : ");
  scanf("%i", &cari);
  for (int i = 0; i < b; i++){
    if (a[i] == cari){
      c += 1;
      d = i;
    }
  }
  if (c > 0){
    printf("Posisi terkanan angka %i ada pada index ke-%i\n", cari, d);
  }else{
    printf("Nilai yang anda cari tidak ditemukan!\n");
  }
  return 0;
}
