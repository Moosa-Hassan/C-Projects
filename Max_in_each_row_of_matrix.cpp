#include <iostream>
using namespace std;


void print_matrix(int matrix[][5],int five){
    cout<<endl<<"Orignal Matrix : "<<endl;
     for (int i = 0; i<five;i++){
        for (int j = 0; j<five; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

void findMaxInEachRow(int matrix[][5],int five, int max[]){
    //int largest ;
    for (int i = 0; i<five ; i++){
        max[i] = matrix[i][0];
        for (int j = 0 ; j<five; j++){
            if (matrix[i][j] > max[i]){max[i] = matrix[i][j];}
        }
        //max[i] = largest;
    }
}
int main(){
    const int  five = 5;
    int max[five] ;
    int matrix[five][five];
    int value = 0;
    cout<< " Enter values to populate the 5*5 matrix: "<<endl;
    for (int i = 0; i<five;i++){
        for (int j = 0; j<five; j++){
            cin>>value;
            //cout<<" ";
            matrix[i][j] =value;
        }
        cout<<endl;
    }
    print_matrix(matrix,five);
    findMaxInEachRow(matrix,five,max);
    cout<<endl<<"Maximun elements in each row ";
    for (int i =0;i<five;i++){
        cout<<endl<<max[i];
    }
    return 0;
}