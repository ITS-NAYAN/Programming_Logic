#include <iostream>
using namespace std;

int main(){
    int SP, CP;
    cout<<"ENTER COST PRICE: ";
    cin>>CP;
    cout<<"ENTER SELLING PRICE: ";
    cin>>SP;
    if (SP>CP)
    {
        cout<<"There is profit of "<<SP-CP<<" Rs";
    }
    else{
        cout<<"There is loss of "<<CP-SP<<" Rs";
    }
    
}