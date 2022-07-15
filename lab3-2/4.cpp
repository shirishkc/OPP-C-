#include<iostream>
using namespace std;
class demo2;
class demo1{
private:
int a;
public:
void getdata(){
    cout<<"enter the 1st value="<<endl;
    cin>>a;
}
friend void swap(demo1, demo2);
};

class demo2{
private:
int b;
public:
void getdata(){
    cout<<"enter the 2nd value="<<endl;
    cin>>b;
}
friend void swap(demo1, demo2);
};

void swap(demo1 x ,demo2 y){
int c;
c=x.a;
x.a=y.b;
y.b=c;

cout<<"The swapped value of a in demo1 is=" <<x.a<<endl;
cout<<"The swapped value of b in demo2 is=" <<y.b<<endl;
}

int main(){
    demo1 a;
    demo2 b;
    a.getdata();
    b.getdata();
    swap(a,b);
    return 0;

    
}