#include <iostream>
#include <string>
using namespace std;
int matrix1 [0][0];
int matrix2 [0][0];

int matrix_size(int row,int column){
    return row*column ;
}

string matrix_addition(int column, int rows){
    string x ;
    for (int i = 0 ; i<rows; i++){
        for (int j = 0 ; j<column ; j++){
            x += to_string((matrix1[i][j]+matrix2[i][j]));
        }
    }
    return x;

}
string matrix_substraction(int colums, int rows){
    string x ;
    for (int i = 0 ; i<rows; i++){
        for (int j = 0 ; j<colums ; j++){
            x += to_string((matrix1[i][j]-matrix2[i][j]));
        }
        
    }
    return x;
    
}

int main(){
    string operation;
    int row1 = 0;
    int  row2 = 0;
    int column1 = 0;
    int column2 = 0;
    
    cout<<"Enter a matrix operation ";
    cin>>operation;
    while (operation != "addition" && operation != "substraction"){
        cout<<" Error, enter addition or substraction only "<<endl;
        cin>>operation;
    }
    cout<<endl<<"Please enter the number of rows for matrix 1: "<<endl;
    cin>>row1;
    cout<<endl<<"Please enter the number of colums for matrix 1: "<<endl;
    cin>>column1;
    cout<<endl<<"Please enter the number of rows for matrix 2: "<<endl;
    cin>>row2;
    cout<<endl<<"Please enter the number of column for matrix 2: "<<endl;
    cin>>column2;
    matrix1 [row1][column1];
    matrix2 [row2][column2];
    cout<<endl<<"Enter a single number for Matrix 1: "<<endl;
    int count =0;
    for (int i =0; i<row1 ; i++){
        if (row1+column1)
        for (int j=0;j<column1;j++){
            cin>>matrix1[i][j];
            count++;
        }
    }
    cout<<endl<<"Enter a single number for Matrix 1: "<<endl;
    count =0;
    for (int i =0; i<row1 ; i++){
        for (int j=0;j<column1;j++){
            cin>>matrix1[i][j];
            count++;
        }
    }
    if (operation == "addition"){
    cout<<endl<<"Result ";
    cout<<endl<<matrix_addition(column1,row1);}
    else{
         cout<<endl<<"Result ";
    cout<<endl<<matrix_addition(column1,row1);
    }

    
    return 0;
}