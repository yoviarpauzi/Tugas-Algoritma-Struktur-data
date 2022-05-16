#include <iostream>
#define max 30
using namespace std;
int posisi = 0, stack[max];
void push(int a){
    if(posisi == max){
        cout << "Stack penuh!!" << endl;
    }else{
        stack[posisi] = a;
        cout << a << " berhasil ditambahkan ke stack!!" << endl;
        posisi++;
    }
}
void pop(){
    int a;
    if(posisi == 0){
        cout << "Stack masih kosong!!" << endl;
    }else{
        a = stack[posisi - 1];
        cout << a << " Keluar dari stack" << endl;
        posisi--;
    }
}
void printStack(){
    int a = posisi - 1;
    if(posisi == 0){
        cout << "Stack kosong!!" << endl; 
    }else{
        cout << "Menampilkan data pada stack!!" << endl;
        while(a >= 0){
            cout << "|" << a << "| " <<  stack[a] << " |" << a << "|" << endl;
            a--;
        }
    }
}
void full(){
    if(posisi == max){
        cout << "Stack Penuh!!!" << endl;
    }else if(posisi == 0){
        cout << "Stack Kosong!!!" << endl;
    }else{
        cout << "Stack belum penuh dan masih tersisa " << max - posisi << " ruang" << endl; 
    }
}
int main(){
    push(89);
    push(53);
    push(64);
    push(27);
    push(75);
    printStack();
    pop();
    printStack();
    full();
    return 0;
}