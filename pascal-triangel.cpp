#include<iostream>
using namespace std;
int main(){
  int n, i, j, k;
  cout << "Inputkan nilai : ";
  cin >> n;
  int arr[n][n];
  for (i = 0; i < n; i++){
    for (j = n - 1; j >= i;j--){
      cout << "  ";
    }
    for (k = 0; k <= i; k++){
      if (k == 0 || k == i){
        arr[i][k] = 1;
        cout << arr[i][k] << "   ";
      }else{
        arr[i][k] = arr[i-1][k-1] + arr[i-1][k];
        cout << arr[i][k] << "   ";
      }
    }
    cout << "\n";
  }
  return 0;
}
