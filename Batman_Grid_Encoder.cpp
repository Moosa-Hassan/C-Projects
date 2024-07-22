#include <iostream>

using namespace std;

void print(char* ptr, int row){
    for (int i =0; i<25 ; i++){
   
            cout<<(*(ptr+i))<<" ";
        
        if (i ==4 || i == 9 || i==14 || i == 19 || i ==24){cout<<endl;}
    }
}

void replace(char* ptr){
    *(ptr+0) = '*';
    *(ptr+4) = '*';
    *(ptr+6) = '*';
    *(ptr+8) = '*';
    *(ptr+12) = '*';
    *(ptr+16) = '*';
    *(ptr+18) = '*';
    *(ptr+20) = '*';
    *(ptr+24) = '*';
}

int main(){
    const int five = 5;
    char grid[five][five]= {{'A','B','C','D','E'},
                            {'F','G','H','I','J'},
                            {'K','L','M','N','O'},
                            {'P','Q','R','S','T'},
                            {'U','V','W','X','Y'}};
    char* ptr = grid[0];
    cout<<endl<<"orignal matrix "<<endl;
    print(ptr,five);
    replace(ptr);
    cout<<endl<<"modified matrix "<<endl;
    print(ptr,five);
    return 0;
}
