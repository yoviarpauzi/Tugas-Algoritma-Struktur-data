#include <iostream>
#define max 10
using namespace std;
int back = 0, front = 0;
struct pasien{
    string nama, tujuan;
}pasien[max];
void Enqueue(){
    int pilih;
    if(back == max){
        cout << "Antrian penuh!, tunggu beberapa saat lagi!" << endl;
    }else{
        cout << "Inputkan nama pasien : ";
        getline(cin, pasien[back].nama);
        cout << "Tujuan pengobatan : " << endl;
        cout << "1. Dokter spesialis gigi" << endl;
        cout << "2. Dokter spesialis kulit" << endl;
        cout << "3. Dokter umum" << endl;
        menu:
        cout << "Pilih menu : ";
        cin >> pilih;
        cin.ignore(1,'\n');
        if(pilih == 1){
            pasien[back].tujuan = "Dokter spesialis gigi"; 
        }else if(pilih == 2){
            pasien[back].tujuan = "Dokter speasialis kulit";
        }else if(pilih == 3){
            pasien[back].tujuan = "Dokter umum";
        }else{
            cout << "Pilihan tidak ada" << endl;
            goto menu;
        }
        cout << "Data antrian berhasil ditambahkan!" << endl;
        back++;
    }
    cout << endl;
}
void Dequeue(){
    int a = 0;
    if(back == a){
        cout << "Antrian kosong!!" << endl;
    }else{
        cout << "Pasien dengan data : " << endl;
        cout << "Nama : " << pasien[front].nama << endl;
        cout << "Tujuan : " << pasien[front].tujuan << endl;
        cout << "Telah dipanggil, dan keluar dari antrian!" << endl;
        while(a < back){
            pasien[a].nama = pasien[a + 1].nama;
            pasien[a].tujuan = pasien[a + 1].tujuan;
            a++;
        }
        back--;
    }
    cout << endl;
}
void View(){
    int a = 0;
    if(back == a){
        cout << "Antrian kosong!!" << endl;
    }else{
        cout << "Menampilkan antrian pasien : " << endl;
        while(a < back){
            cout << "Nama   : " << pasien[a].nama << endl;
            cout << "Tujuan : " << pasien[a].tujuan << endl;
            a++;
            cout << endl;
        }
    }
    cout << endl;
}
void menu(){

}
int main(){
    menu();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
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