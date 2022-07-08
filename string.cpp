#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<"Initial string is :";
    cout << str << endl;
    // push the string at the end
    str.push_back('M');
    cout << "After the push function :";
    cout << str << endl;
    // pop funtion 
    str.pop_back();
    cout << "After the pop function :";
    cout << str << endl;

     return 0;



}