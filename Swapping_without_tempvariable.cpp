/*
Swapping the value of two variables without using a tempeorary variable
*/
# include <iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;

    cout<<"Enter x : "<<endl;
    cin>> x;
    cout<<"Enter y : "<<endl;
    cin>>y;
    
    x = x+y;
    y = x-y;
    x = x-y;

    cout<<"Swapped x : "<<x<<endl;
    cout<<"Swapped y : "<<y<<endl;


    return 0;
}