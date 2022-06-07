#include <iostream>
using namespace std;
struct Tree{
    int data;
    Tree *left, *right;
};
Tree *newTree(int x){
    Tree *cur = new Tree();
    cur->data = x;
    cur->left = cur->right = NULL;
    return cur;
}
Tree *insert(Tree *root, int x){
    if(root == NULL){
        newTree(x);
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
Tree *minValueNode(Tree *node)
{
    Tree *cur = node;
    while (cur && cur->left != NULL)
        cur = cur->left;
 
    return cur;
}
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
void preorder(Tree *root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Tree *root){
    if(root == NULL){
        return;
    }
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}
void postorder(Tree *root){
    if(root == NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}
int main(){
    Tree *root = NULL;
    int pil, a;
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 25);
    insert(root, 11);
    insert(root, 12);
    insert(root, 24);
    insert(root, 26);
    while(1){
        cout << "Menu : " << endl;
        cout << "1. Hapus node" << endl;
        cout << "2. Preorder" << endl;
        cout << "3. Inorder" << endl;
        cout << "4. Postorder" << endl;
        cout << "5. Keluar" << endl;
        cout << "Inputkan menu : ";
        cin >> pil;
        if(pil == 1){
            cout << "Inputkan data yang akan dihapus : ";
            cin >> a;
            deleteNode(root, a);
        }else if(pil == 2){
            preorder(root);
        }else if(pil == 3){
            inorder(root);
        }else if(pil == 4){
            postorder(root);
        }else if(pil == 5){
            cout << "Program berhenti!" << endl;
            break;
        }else{
            cout << "Pilihan tidak ada!";
        }
        cout << endl;
    }
    return 0;
}