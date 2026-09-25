#include <iostream>
#include <vector>
#include <string>
using namespace std;

void insertion(){
    vector<string>name;
    name={"reshma","mithila","shabana","riyaz","shakib"}; //index->0=reshma,1=mithila,2=shabana,3=riyaz,4=shakib
    for(string x:name){                             
        cout<<x<<"\n";
    }
    cout<<"********************************"<<endl;
    //insert at end
    name.push_back("dipzol");
    //traversing
    for(string x:name){ 
        cout<<x<<"\n";
    }
    cout<<"********************************"<<endl;
    name.insert(name.begin()+2,"bobby"); //insert at any position
    for(string x:name){
        cout<<x<<"\n";
    }
    //how to get access?
    //there is 2 way
    //1-> v[index]
    //2-> v.at()
    cout<<"**********************************"<<endl;
    vector<char> val;
    //check if out vector or not
    if(val.empty()){
        cout<<"vector is empty\n";
    }
    val={'a','e','i','o','u'};
    if(!val.empty()){
        cout<<"now not empty\n";
    }
    cout<<"accessing index no 2 using [] ->"<<val[2]<<endl;
    cout<<"accessing index no 2 using at() ->"<<val.at(2)<<endl;
    val[2]='f'; //update a value in index 2.
    cout<<"after updating index no 2 :"<<val.at(2)<<endl;
    //traversing
    for(int i=0;i<val.size();i++){ //to figure out vector size we use .size() function
        cout<<val[i]<<"\n";
    }
}
int main(){
    insertion();
}