#include <iostream>
using namespace std;
int x;
struct Node{
    int data;
    Node *next;
}*head, *tail, *cur, *newnode;
void addLast(){
    newnode = new Node();
    newnode->data = x;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
        tail->next = NULL;
    }
    cout << "Data telah sukses ditambahkan dari belakang!!" << endl;
}
void addFirst(){
    newnode = new Node();
    newnode->data = x;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;
        head = newnode;
    }
    cout << "Data telah sukses ditambahkan dari depan!!" << endl;
}
void addAfter(){
    int a, b;
    cout << "Inputkan data : ";
    cin >> a;
    cout << "Tambahkan data setelah : ";
    cin >> b;
    newnode = new Node();
    newnode->data = a;
    cur = head;
    while(cur->data != b){
        cur = cur->next;
    }
    newnode->next = cur->next;
    cur->next = newnode;
    cout << "Data telah ditambahkan setelah nilai " << b << endl;
}
void firstCondition(){
    int a[4] = {100, 200, 300, 400};
    for (int i = 0; i < 4; i++)
    {
        x = a[i];
        addLast();
    }
}
void delFirst(){
    Node *del;
    if(head != NULL){
        del = head;
        head = head->next;
        delete del;
    }else{
        cout << "Data pada Linked List kosong!!" << endl;
    }
}
void delLast(){
    Node *del;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    del = cur->next;
    cur->next = tail;
    tail = cur;
    tail->next = NULL;
    delete del;
    cout << "Data paling belakang telah dihapus!!" << endl;
} 
void delData(){
    int b;
    cout << "Inputkan data yang akan dihapus : ";
    cin >> b;
    Node *del;
    int a = 0;
    cur = head;
    while(cur != NULL){
        if(cur->data == b){
            a++;
        }
        cur = cur->next;
    }
    if(a == 0){
        cout << "Data tidak ada pada linkedlist!!" << endl;
    }else{
        if(head->data == b){
            delFirst();
        }else if(tail->data == b){
            delLast();
        }else{
            cur = head;
            while(cur->next->data != b){
                cur = cur->next;
            }
            del = cur->next;
            cur->next = del->next;
            delete del;
            cout << "Data " << b <<  " telah dihapus!!" << endl;
        }
    }
}
void input(){
    cout << "Inputkan data : ";
    cin >> x;   
}
void printLinkList(){
    cout << "Menampilkan data : " << endl;
    cur = head;
    while(cur != NULL){
        cout << cur->data << endl;
        cur = cur->next;
    }
}
int main(){
    int pil = 8;
    firstCondition();
    system("cls");
    cout << "Menu : " << endl;
    cout << "1. Tambah depan" << endl;
    cout << "2. Tambah belakang" << endl;
    cout << "3. Tambah data setelah" << endl;
    cout << "4. Hapus data paling depan" << endl;
    cout << "5. Hapus data paling belakang" << endl;
    cout << "6. Hapus data" << endl;  
    cout << "7. Tampilkan data" << endl;
    cout << "8. Keluar" << endl;
    while(1){
        cout << "Pilih menu : ";
        cin >> pil;
        if(pil == 1){
            input();
            addFirst();
        }else if(pil == 2){
            input();
            addLast();
        }else if(pil == 3){
            addAfter();
        }else if(pil == 4){
            delFirst();
        }else if(pil == 5){
            delLast();
        }else if(pil == 6){
            delData();
        }else if(pil == 7){
            printLinkList();
        }else if(pil == 8){
            break;
        }else{
            cout << "Pilihan tidak ada!!" << endl;
        }
        cout << endl;
    } 
    return 0;
}