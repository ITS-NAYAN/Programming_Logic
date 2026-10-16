#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"ENTER NUMBER: ";
    cin>>num;
    if ((num%3==0) & (num%5==0))
    {
        cout<<"NUMBER IS DIVISIBLE BY BOTH 3 AND 5";
    }
    else if ((num%3==0) | (num%5==0))
    {
        cout<<"NUMBER IS DIVISIBLE BY 3 OR 5";
    }
    else{
        cout<<"NUMBER IS NOT DIVISIBLE BY 3 AND 5";
    }
    
    
}