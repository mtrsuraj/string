#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "who's you";
    cout << str << endl;
    str.resize(4);
    cout << str << endl;

    //Display chapacity of the string
    cout << str.capacity() << endl;
    //length depend on resize if you use 
    cout << str.length() << endl;
     return 0;



}