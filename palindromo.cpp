#include<iostream>
#include<string>
using namespace std;
string palabra(string str){
    int b = str.length();
    if (b == 0){
        return "Si es";
    }
    if (b == 1){
        return "Si es";
    }
    if (str[0] != str[b-1]){
        return "No es";
    }

    if (str[0] == str[b-1]){
        string str2 = str.substr(1,b-2);
        return palabra(str2);
    }
}
int main(){
    cout<<palabra("cualquier palabra")<<endl;
}
