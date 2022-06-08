#include <iostream>
using namespace std;
int a = 0;
struct Tree{
	int data;
	Tree *left, *right, *parent;
};
// fungsi untuk membuat Tree baru
Tree *createRoot(Tree *root, int x){
	root = new Tree();
	root->data = x;
	root->left = root->right = NULL;
	cout << "Data berhasil dibuat";
	return root;
}
// fungsi untuk insert node
Tree *insert(Tree *root, int x){
	if(root == NULL){
		return createRoot(root, x);
	}else{
		if(x < root->data){
			root->left = insert(root->left, x);
		}else if(x > root->data){
			root->right = insert(root->right, x);
		}else{
			cout << "Data sudah ada";
		}
		return root;
	}
}
// fungsi untuk mencari node
void find(Tree *root, int x){
	if(root == NULL){
		cout << "Data tidak ditemukan!!";
	}else if(x == root->data){
		cout << "Data ditemukan!";
	}else if(x > root->data){
		find(root->right, x);
	}else if(x < root->data){
		find(root->left, x);
	}
}
// fungsi untuk mencari nilai minimal pada node
Tree *minValueNode(Tree *root)
{
    Tree *cur = root;
    while (cur && cur->left != NULL)
        cur = cur->left;
 
    return cur;
}
// fungsi untuk menghapus node
Tree *deleteNode(Tree *root, int x)
{
    if (root == NULL)
        return root;

    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else {
        if (root->left == NULL) {
            Tree *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Tree *temp = root->left;
            free(root);
            return temp;
        }
        Tree *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
// fungsi untuk mengecek kedalaman tree
int height(Tree *root){
	Tree *u;
	Tree *v;
	if(root == NULL)
		return -1;
	else{
		int u = height(root->left);
		int v = height(root->right);
		if(u > v){
			return u + 1;
		}else{
			return v + 1;
		}
	}
}
// fungsi untuk menghitung banyaknya node
int count(Tree *root){
	if(root == NULL)
		return 0;
	return count(root->left) + count(root->right) + 1;
}
// fungsi untuk menampilkan tree secara preorder
void preorder(Tree *root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
// fungsi untuk menampilkan tree secara inorder
void inorder(Tree *root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
//fungsi untuk menampilan tree secara postorder
void postorder(Tree *root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
int main(){
	Tree *root = NULL;
	int pil;
	int a = 0;
	root = createRoot(root, 13);
	insert(root, 12);
	insert(root, 20);
	insert(root, 4);
	insert(root, 16);
	insert(root, 9);
	system("cls");
	while(1){
		cout << "\nMenu : " << endl;
		cout << "1. Create new" << endl;
		cout << "2. Insert" << endl;
		cout << "3. Search" << endl;
		cout << "4. Delete" << endl;
		cout << "5. Height" << endl;
		cout << "6. Count" << endl;
		cout << "7. Print Preorder" << endl;
		cout << "8. Print Inorder" << endl;
		cout << "9. Print Postorder" << endl;
		cout << "10. Keluar" << endl;
		cout << "Inputkan pilihan : ";
		cin >> pil;
		if(pil == 1){
			cout << "Inputkan data : ";
			cin >> a;
			root = createRoot(root, a);
		}else if(pil == 2){
			cout << "Inputkan data : ";
			cin >> a;
			root = insert(root, a);
		}else if(pil == 3){
			cout << "Inputkan data : ";
			cin >> a;
			find(root, a);
		}else if(pil == 4){
			cout << "Inputkan data yang ingin dihapus : ";
			cin >> a;
			deleteNode(root, a);
		}else if(pil == 5){
			cout << "Kedalaman tree : " << height(root);
		}else if(pil == 6){
			cout << "Jumlah node dalam tree : " << count(root);
		}else if(pil == 7){
			cout << "Preorder : ";
			preorder(root);
		}else if(pil == 8){
			cout << "Inorder : ";
			inorder(root);
		}else if(pil == 9){
			cout << "Postorder : ";
			postorder(root);
		}else if(pil == 10){
			cout << "Program berhenti";
			break;
		}else{
			cout << "Pilihan tidak ada!!";
		}
		cout << endl;
	}
	return 0;
}