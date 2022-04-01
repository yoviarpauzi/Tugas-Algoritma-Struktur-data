#include <stdio.h>
#include <stdlib.h>
#define N 10
int top = -1, stack[N];
void tambah(){
  if (top == N - 1){
    printf("Data pada stack penuh");
  }else{
    top++;
    printf("Inputkan data : ");
    scanf("%i", &stack[top]);
    printf("Data telah ditambahkan pada index ke-%i\n", top);
  }
}
void tampil(){
  if (top == -1){
    printf("Tidak ada data pada stack\n");
  }else{
    for (int i = top; i >= 0; i--){
      printf("XXX[%2i]XXX\n", stack[i]);
    }
  }
}
int main(){
  int menu;
  printf("Menu : \n");
  printf("1. Tambah data\n");
  printf("2. Tampilkan data\n");
  menu :
  do{
  printf("Pilih menu : ");
  scanf("%i", &menu);
  system("clear");
  switch(menu){
    case 1 : 
      tambah();
      break;
    case 2 :
      tampil();
      break;
    case 3 :
      printf("Program berakhir\n");
      break;
    default:
      printf("Pilihan menu tidak ada!\n");
      goto menu;
  }}while(menu != 3);
  return 0;
}
