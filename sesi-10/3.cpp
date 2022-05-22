#include <iostream>
#define max 5
using namespace std;
int front = 0, back = 0;
struct nasabah{
    string nama, tujuan;
}nasabah[max];
void Enqueue(){
    int pilih;
    if(back == max){
        cout << "Antrian penuh!" << endl;
    }else{
        cout << "Inputkan nama : ";
        getline(cin, nasabah[back].nama);
        menu:
        cout << "Menu layanan : " << endl;
        cout << "1. Tarik tunai" << endl;
        cout << "2. Simpan uang" << endl;
        cout << "3. Transfer uang" << endl;
        cout << "4. Tukar uang" << endl;
        cout << "5. Buka rekening" << endl;
        cout << "Pilih layanan : ";
        cin >> pilih;
        cin.ignore(1,'\n');
        if(pilih == 1){
            nasabah[back].tujuan = "Tarik tunai";
        }else if(pilih == 2){
            nasabah[back].tujuan = "Simpan uang";
        }else if(pilih == 3){
            nasabah[back].tujuan = "Transfer uang";
        }else if(pilih == 4){
            nasabah[back].tujuan = "Tukar uang";
        }else if(pilih == 5){
            nasabah[back].tujuan = "Buka rekening";
        }else{
            cout << "Pilihan layanan tidak ada!" << endl;
            goto menu;
        }
        back++;
    }
    cout << endl;
}
void Dequeue(){
    int a = 0;
    if(back == a){
        cout << "Antrian kosong!" << endl;
    }else{
        cout << "Nasabah dengan data : " << endl;
        cout << "Nama   : " << nasabah[front].nama << endl;
        cout << "Tujuan : " << nasabah[front].tujuan << endl;
        cout << "Telah dipanggil dan keluar dari antrian" << endl;
        while(a < back){
            nasabah[a].nama = nasabah[a+1].nama;
            nasabah[a].tujuan = nasabah[a+1].tujuan;
            a++;
        }
        back--;
    }
    cout << endl;
}
void View(){
    int a = 0;
    cout << "Menampilkan data antrian nasabah : " << endl;
    while(a < back){
        cout << "Nama   : " << nasabah[a].nama << endl;
        cout << "Tujuan : " << nasabah[a].tujuan << endl;
        a++;
    }
    cout << endl;
}
void menu(){
    cout << "Menu : " << endl;
    cout << "1. Tambah antrian" << endl;
    cout << "2. Panggil nasabah" << endl;
    cout << "3. Tampilkan antrian" << endl;
    cout << "4. Keluar" << endl;
    cout << endl;
}
int main(){
    menu();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    View();
    Dequeue();
    View();
    return 0;
}