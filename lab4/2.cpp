#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    Rectangle(){
        cout<<"The area of the rectangle is:"<<0<<endl;

    };
    Rectangle(int l, int b){
        length=l;
        breadth=b;
        cout<<"The area of the rectangle is:"<<l*b<<endl;

    };
    Rectangle(int l){
        length=breadth=l;
        cout<<"The area of the rectangle is:"<<l*l<<endl;

    };
   
};
int main(){
    Rectangle r,r1(2,3),r2(3);
    return 0;
}

