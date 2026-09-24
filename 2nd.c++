//change element of an array
#include <iostream>
using namespace std;

void changeArrElement(){
    int i;
    int arr[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"******************************************************************************************"<<endl;
    arr[2]=1000; //through this statement we have changed array's value on index no 2.
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    changeArrElement();
}