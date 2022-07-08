#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "who's you some time we face problem";
    cout << str << endl;
    str.resize(7);
    cout << str << endl;

    //Display chapacity of the string
    cout << str.capacity() << endl;
    //length depend on resize if you use 
    cout << str.length() << endl;
    // display of shrink_to_fit
     str.shrink_to_fit();
 //After the Shrink
 cout << str.capacity() << endl;
     return 0;



}