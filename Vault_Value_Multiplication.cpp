#include <iostream>
using namespace std;


void computeProduct(int* ptr, int row, int column, int &total){
    for (int i =0; i<row*column ; i++){
        
            
            total *= *(ptr+i);
            
       
    }
}

void print(int* ptr, int row, int column){
    for (int i =0; i<row*column ; i++){
        
    
        
    
        cout<<*(ptr+i)<<" ";
        if (i == 3 || i ==7){cout<<endl;}
       
       
    }
}
     



int main(){
    const int row =3;
    const int column =4;
    int total =1;
    int array[row][column] = {{1,2,3,4},
                              {5,6,7,8},
                              { 9,10,11,12}};
    int* ptr = array[0];
    cout<<"Array Values: "<<endl;
    print(ptr,row,column);
    cout<<endl;
    computeProduct(ptr,row,column, total);
    cout<<endl<<"The total is "<<total;
    return 0;
}
