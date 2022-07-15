#include<iostream>
using namespace std;
class Sample{
    private:
    int x;

    public:
    void getdata(){
        cout<<"Enter the value"<<endl;
        cin>>x;
    }

    friend void mean(Sample, Sample);
};

void mean(Sample s1, Sample s2){
    float mean;
    mean=s1.x+s2.x;
    cout<<"The mean is="<<mean<<endl;
}

int main(){
    Sample s1,s2;
    s1.getdata();
    s2.getdata();
    mean(s1,s2);
}