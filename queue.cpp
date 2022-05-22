#include <iostream>
#define max 10
using namespace std;
int b1 = 0, b2 = 0, front = 0, gg = 11000, kl = 21000;
struct data{
  string nama;
  int no;
};
struct gigi{
    data pasien;
}gigi[max];
struct kulit{
    data pasien;
}kulit[max];
void Enqueue(string nama, int a){
    int pilih = a;
    if(pilih == 1){
        if(b1 == max){
            cout << "Antrian dengan tujuan ke dokter spesialis gigi penuh!, tunggu beberapa saat lagi!" << endl;
        }else{
            gg++;
            gigi[b1].pasien.no = gg;
            gigi[b1].pasien.nama = nama;
            cout << "Data berhasil ditambahkan!!" << endl;
            b1++;
        }
    }else if(pilih == 2){
        if(b2 == max){
            cout << "Antrian dengan tujuan ke dokter spesialis kulit penuh!, tunggu beberapa saat lagi" << endl;
        }else{
            kl++;
            kulit[b2].pasien.no = kl;
            kulit[b2].pasien.nama = nama;
            cout << "Data berhasil ditambahkan!!" << endl;
            b2++;
        }
    }
}
void Dequeue(){
    int pilih;
    int a = 0;
    cout << "Panggil antrian pasien untuk : " << endl;
    cout << "1. Dokter spesialis gigi" << endl;
    cout << "2. Dokter spesialis kulit" << endl;
    cout << "Pilih (1/2) : ";
    input:
    cin >> pilih;
    cin.ignore(1, '\n');
    if(pilih == 1){
        if(b1 == 0){
            cout << "Antrian kosong!!" << endl;
        }else{
            cout << "Memanggil pasien dengan data : " << endl;
            cout << "No antrian pasien : " << gigi[front].pasien.no << endl;
            cout << "Nama : " << gigi[front].pasien.nama << endl;
            while(a < b1){
                gigi[a].pasien.no = gigi[a + 1].pasien.no;
                gigi[a].pasien.nama = gigi[a + 1].pasien.nama;
                a++;
            }
            b1 -= 1;
        }
    }else if(pilih == 2){
        if(b2 == 0){
            cout << "Antrian kosong!!" << endl;
        }else{
            cout << "Memanggil pasien dengan data : " << endl;
            cout << "No antrian pasien : " << kulit[front].pasien.no << endl;
            cout << "Nama : " << kulit[front].pasien.nama << endl;
            while(a < b2){
                kulit[a].pasien.no = kulit[a + 1].pasien.no;
                kulit[a].pasien.nama = kulit[a + 1].pasien.nama;
                a++;
            }
            b2 -= 1;
        }
    }else{
        goto input;
    }
}
void input(){
    string nama;
    int tujuan;
    cout << "Inputkan nama pasien : ";
    getline(cin, nama);
    cout << "Tujuan berobat : " << endl;
    cout << "1. Dokter spesialis gigi" << endl;
    cout << "2. Dokter spesialis kulit" << endl;
    input:
    cout << "Pilih (1/2) : ";
    cin >> tujuan;
    cin.ignore(1,'\n');
    if(tujuan == 1){
        Enqueue(nama, 1);
    }else if(tujuan == 2){
        Enqueue(nama, 2);
    }else{
        goto input;
    }
}
void view(){
    int pilihan;
    int a = 0;
    cout << "Tampilkan data antrian untuk : " << endl;
    cout << "1. Dokter spesialis gigi" << endl;
    cout << "2. Dokter spesialis kulit" << endl;
    cout << "Pilih (1/2) : ";
    input:
    cin >> pilihan;
    if(pilihan == 1){
        if(b1 == 0){
            cout << "Antrian kosong!!" << endl;
        }else{
            cout << "Menampilkan data antrian!" << endl;
            while(a < b1){
                cout << "No antrian pasien : " << gigi[a].pasien.no << endl;
                cout << "Nama : " << gigi[a].pasien.nama << endl;
                cout << endl;
                a++;
            }
        }
    }else if(pilihan == 2){
        if(b2 == 0){
            cout << "Antrian kosong!!" << endl;
        }else{
            cout << "Menampilkan data antrian!" << endl;
            while(a < b2){
                cout << "No antrian pasien : " << kulit[a].pasien.no << endl;
                cout << "Nama : " << kulit[a].pasien.nama << endl;
                cout << endl;
                a++;
            }
        }
    }else{
        goto input;
    }
}
int main(){
    int menu;
    while(1){
        cout << "Menu : " << endl;
        cout << "1. Tambah antrian" << endl;
        cout << "2. Panggil pasien" << endl;
        cout << "3. Tampilkan antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> menu;
        cin.ignore(1, '\n');
        if(menu == 1){
            input();
        }else if(menu == 2){
            Dequeue();
        }else if(menu == 3){
            view();
        }else if(menu == 4){
            break;
        }else{
            cout << "Pilihan tidak ada!" << endl;
        }
        system("pause");
        system("cls");
    }
}