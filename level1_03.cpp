#include<iostream>
#include<string>

using namespace std;

int main() {
    string name;
    string BYE ="BYE";
    cout<<"enter your name babe"<<endl;
    cin>>name;

    if(name !=BYE){
        cout<<"welcome "<<name<<"babe"<<endl;
    } else {
        cout<<"GOOD BYE"<<endl;
    }
    return 0;
}