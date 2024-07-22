#include <iostream>
using namespace std;

void discoverFirstClue(int** firstclue){
    **firstclue += 5;
}

void unlockSecretKey( int** keySecret, int flowervalue ){
    **keySecret = flowervalue*2;
}
void openDoor(int** finalStep, int flowervalue , int keyvalue){
    **finalStep = flowervalue + keyvalue;
    if (**finalStep >39){
        cout<<endl<<"The door swings to reveal a hidden path "<<endl;
    }
    else{
        cout<<endl<<"The Door remains locked. Perhaps so,ething is missing "<<endl;
    }
}


int main(){
    int flower =10;
    int key = 3;
    int door =7;
    int* ptrFlower = &flower;
    int* ptrDoor = &door;
    int* ptrKey = &key;
    int** firstclue = &ptrFlower;
    int** keysecret = &ptrKey;
    int** finalstep = &ptrDoor;
    cout<<"Initail Values: Flower = "<<flower<<", Key = "<<key<<", Door = "<<door<<endl;
    cout<<endl<<"The key glows as the flower changes"<<endl;
    discoverFirstClue(firstclue);
    cout<<endl<<"Current Values: Flower = "<<flower<<", Key = "<<key<<", Door = "<<door<<endl;
    unlockSecretKey(keysecret,flower);
    cout<<endl<<"The key wispers a secret melody"<<endl;
    cout<<endl<<"Current Values: Flower = "<<flower<<", Key = "<<key<<", Door = "<<door<<endl;
    openDoor(finalstep,flower,key);
    cout<<endl<<"Final Values: Flower = "<<flower<<", Key = "<<key<<", Door = "<<door<<endl;
     
    



    return 0;
}
