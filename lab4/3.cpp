#include<iostream>
using namespace std;
class AddAmount
{
private:
long amount=50;
    
public:
    AddAmount(){
        cout<<"Nothing added"<<endl;
    };

    AddAmount(long a){
       amount=amount+a;
       cout<<"Amount="<<amount<<endl;
    }
   
};

int main(){
    AddAmount a,b(3000);
    return 0;
}


