#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"ENTER YEAR TO CHECK LEAP YEAR OR NOT: ";
    cin>>num;
    if ((num%400==0) || (num%4==0) & (num%100!=0))
    {
        cout<<"ENTER YEAR IS LEAP YEAR";
    }
    else{
        cout<<"ENTER YEAR IS NOT LEAP YEAR";
    }
    
}