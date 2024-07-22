/*
Program to find all prime numbers within a given range
*/
#include <iostream>
using namespace std;

int main(){
    int Lower = 0;
    int Upper = 0;
    int count = 0;
    do{
    cout<<"Enter the start of the range : ";
    cin>>Lower;
    cout<<endl<<"Enter the end of the range : ";
    cin>>Upper;
    if(Lower>Upper){
        cout<<endl<<"Error Lower bound bigger tha Upper bound enter again"<<endl;
    }}
    while (Lower>Upper);
    cout<<endl<<"Prime number in the range ["<<Lower<<","<<Upper<<"]"<<endl;
    for (int i =Lower ; i<=Upper ; i++){
        count = 0;
        for (int j = 1; j<=i; j++){          
            if (i%j == 0){
                count = count +1;
                
            }
        }
        if (count == 2){
            cout<<i<<" ";
        }
        
    }
    

    
    return 0;
    }