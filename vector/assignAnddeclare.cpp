#include <iostream>
#include <vector> //The vector class template is defined in the <vector> header file.
using namespace std;

void vectFun(){
    vector<int> v; //syntax-> vector<T> v; where T=type of elements and v=name of vector
    v={12,24,25,36};
    for(int x: v){
        cout<<x<<"\n";
    }
}

int main(){
    vectFun();
}