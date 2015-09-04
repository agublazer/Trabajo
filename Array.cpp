#include <iostream>
using namespace std;

int main(){
  int x[10];
  int i;
  int j;
  int temp;
  for(i = 0; i< 10; i++){
      cin >> x[i];
  }
  cout<<"Lista"<<endl;
  for(i = 0; i< 10; i++){
      cout << x[i]<< endl;
  }
  for(i = 0; i< 10; i++){
      for(j=0;j<10;j++){
        if(x[i]<x[j]){
            temp = x[j];
            x[j] = x[i];
            x[i] = temp;
        }
      }
    }
  cout<<"Lista ordenada"<<endl;
  for(i = 0; i< 10; i++){
      cout << x[i]<< endl;
  }
}