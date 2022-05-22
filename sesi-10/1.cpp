#include <iostream>
#define max 4
using namespace std;
string data[max];
int front = 0, back = 0;
void Enqueue(){
    if(back == max){
        cout << "Antrian penuh!, mohon tunggu beberapa saat lagi!!" << endl;
    }else{
        cout << "Inputkan no peserta : ";
        cin >> data[back];
        cout << "No peserta ujian " << data[back] << " berhasil ditambahkan ke antrian!!" << endl;
        back++;
    }
    cout << endl;
}
void Dequeue(){
    if(back == 0){
        cout << "Antrian Kosong!!" << endl;
    }else{
        int a = 0;
        cout << data[front] << " berhasil dipanggil dan keluar dari antrian!!" << endl;
        while(a < back){
            data[a] = data[a + 1];
            a++;
        }
        back--;
    }
    cout << endl;
}
void View(){
    int a = 0;
    cout << "No peserta yang belum dipanggil : ";
    while(a < back){
        if(a == back - 1){
            cout << " " << data[a] << endl;
        }else{
            cout << " " << data[a] << ",";
        }
        a++;
    }
    cout << endl;
}
void menu(){
    cout << "Menu : " << endl;
    cout << "1. Tambahkan antrian" << endl;
    cout << "2. Panggil peserta" << endl;
    cout << "3. Tampilkan peserta yang belum dipanggil" << endl;
    cout << "4. Keluar" << endl;
    cout << endl;
}
int main(){
    menu();
    Enqueue();
    Enqueue();
    Enqueue();
    View();
    Dequeue();
    View();
    Enqueue();
    Enqueue();
    View();
}