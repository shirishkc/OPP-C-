#include<iostream>
using namespace std;
class XYZ;
class ABC{
    private:
    int a;

    public:
    void getdata(){
        cout<<"enter the number of ABC"<<endl;
        cin>>a;
    }

    friend void max(XYZ xyz,ABC abc);
};

class XYZ{
private:
int x;

public:
void getdata(){
    cout<<"enter the number of XYZ"<<endl;
    cin>>x;
}

friend void max(XYZ xyz,ABC abc);
};

void max(XYZ xyz, ABC abc){  // XYZ "x" dexa bhane main
    if(abc.a>xyz.x){
        cout<<"The bigger number is ="<<abc.a<<endl;
    }

    else{
        cout<<"The bigger number is ="<<xyz.x<<endl;
    }
}

int main(){
    ABC a;
    XYZ x;
    a.getdata();
    x.getdata();
    max(x,a);
}