#include<iostream>
using namespace std;
class Time{
private:
float hr,min,sec;

public:
void getdata(){
    cout<<"enter hours mins and seconds"<<endl;
    cin>>hr>>min>>sec ;
}

friend Time sum(Time,Time);

};

Time sum(Time t1,Time t2){

int sumhr,summin,sumsec;
sumhr=t1.hr+t2.hr;
summin=t1.min+t2.min;
sumsec=t1.sec+t2.sec;

if(sumsec>60){
    summin=summin+(sumsec/60);
    sumsec=sumsec%60;
    
}
if(summin>60){
    sumhr=sumhr+(summin/60);
    summin=summin%60;
}

cout<<"the sum of two times is"<<sumhr<<"hrs"<<summin<<"mins"<<sumsec<<"seconds"<<endl;

}

int main(){
    Time t1,t2;
    t1.getdata();
    t2.getdata();
    sum(t1,t2);
}

