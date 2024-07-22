#include <iostream>
#include <string>
using namespace std;

int main(){
    string x ;
   
    string z ;
    cout<<"Enter a Sentence : ";
    //cin.ignore();
    getline(cin,x);
    cout<<x;
    int length = x.length();
    for (int i = 0 ; i < length+1; i++){
        z += x.substr(length-i,1);
        

    }
    cout<<endl<<"Modfied Sentence : "<<z;

    return 0;
    }