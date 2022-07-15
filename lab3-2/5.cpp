#include<iostream>
using namespace std;
class two;
class one{
    int feet,inches;

    public:
    void getdata(){
        cout<<"Enter feet and inches:"<<endl;
        cin>>feet>>inches;
    }

    friend void sum(one,two);
};

class two{
     int feet,inches;

    public:
    void getdata(){
        cout<<"Enter feet and inches:"<<endl;
        cin>>feet>>inches;
        }

        friend void sum(one,two);
};

 void sum(one o,two t){
int fsum,isum;
fsum=o.feet+t.feet;
isum=o.inches+t.inches;
if(isum>12)
fsum=fsum+(isum/12);
isum=isum%12;

cout<<"Sum of feets and inches of two classes is="<<fsum<<"feet"<<"&"<<isum<<"inches"<<endl;

}

int main(){
    one x;
    two y;
    x.getdata();
    y.getdata();
    sum(x,y);
    return 0;
}