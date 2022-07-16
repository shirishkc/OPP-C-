#include<iostream>
using namespace std;
class Class1{
    protected:
    int a;

    public:
    int seta(){
        cout<<"Enter the first number:"<<endl;
        cin>>a;
    }
};

class Class2{
    protected:
    int b;

    public:
    int setb(){
        cout<<"Enter the second number:"<<endl;
        cin>>b;
    }
};

class Class3:public Class1,public Class2{
public:
int sum(){
cout<<"The sum of the two numbers is="<<a+b<<endl;
}
};

int main(){
    
    Class3 c3;

    c3.seta();
    c3.setb();
    c3.sum();

    return 0;

}