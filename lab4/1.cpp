#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    string name;
public:
    Student(){
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        if(name==""){cout<<"The name of the student is unknown"<<endl;}
        cout<<"The name of the student is:"<<name<<endl;

    };
    
};

int main(){
    int n,i;
    cout<<"How many student names you want to enter?"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
        Student s[i];

    }
}

