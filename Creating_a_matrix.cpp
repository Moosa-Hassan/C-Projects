#include <iostream>
using namespace std;

int bigarray[0][0];
bool check_sqrt(int num , int &x){
    for (int i =0 ; i<=(num/2) ; i++){
        if ((i*i) == num){
            x=i;
            return true;
        }
    }
    return false;

}
void print_matrix(int x){
    
     for (int i = 0; i<x; i++){
        for (int j = 0; j<x; j++){
            cout<<bigarray[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

void sum(int x){
    int d1 = 0;
    int d2 =0;
    for (int i =0; i<x ; i++){
        d1 += bigarray[i][i];
        d2 += bigarray[i][x-1-i]; 
              
    }
    cout<<endl<<"the sum of daigonal 1 is "<<d1;
    cout<<endl<<"The sum of diagonal 2 is "<<d2;
}

int main(){
    int array[50] ;
    cout<<"Enter integers to populate the square array ( enter 100 to quit) ";
    cout<<endl<<"";
    int num = 0;
    int size = 0;
    do{
        cin>>num;
        if (num ==100){break;}
        array[size] = num;
        size++;
    }
    while (size <=49);
    int x =0;
    int count =0;
    if (check_sqrt(size,x) == true){
        cout<<"Value of x"<<x<<endl;
        bigarray[x][x];
        for (int i =0 ; i<x ; i++){
            for (int j =0 ; j<x ;j++){
                bigarray[i][j] = array[count];
                count++;
                cout<<endl;
            }
        }
        print_matrix(x);
        sum(x);
    }
    else{cout<<endl<<"Not a perfect square ";}



    return 0;
}