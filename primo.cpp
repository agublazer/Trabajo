#include <iostream>
using namespace std;
int primo(int n){
   int a=0,i;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
    return 0;
}

int main(){
    int num;
    cin >> num;
    if (num == 0){
        cout<<"Fin"<<endl;
    }
    else{
        primo(num);
        main();
    }
}
