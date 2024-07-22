#include <iostream>
using namespace std;

bool isRight (int Height, int Base , int Hypotnuse){
    if ((Hypotnuse*Hypotnuse) == ((Height*Height)+(Base*Base))){
        return true;
    }
    cout<<endl<<"This is not a right angled triangle. ";
    return false;

}
void maketriangle(double Hypotnuse){
    for (int i = 0 ;i<=Hypotnuse;i++){
            for (int j = 0; j < Hypotnuse-i ; j++){
                cout<<" ";
            }
            for (int j = 0; j<(i + i -1);j++){
                cout<<"*";
            }
            for (int j = 0; j < Hypotnuse-i ; j++){
                cout<<"";
            }
            cout<<endl;
        }
}

int main(){
    double Height=0.0;
    double Base = 0.0;
    double Hypotnuse = 0.0;
    
    cout<<"Enter Height Base and Hypotnuse "<<endl;
    cin>>Height>>Base>>Hypotnuse;
    if (Height<0.0){
        Height = -Height;
    }
    if (Base<0.0){
        Base = -Base;
    }
    if (Hypotnuse<0.0){
        Hypotnuse = -Hypotnuse;
    }
    if (isRight(Height,Base,Hypotnuse) == true){
        maketriangle(Hypotnuse);
    }


    return 0;
}