#include <iostream>
using namespace std;

int main(){
    int temp, choice;
    cout<<"ENTER TEMPERATURE: ";
    cin>>temp;
    cout<<"SELECT NUMBER FOR CONVERSION 1 for Celcius to Fahrenheit OR 2 for Fahrenheit to Celcius: ";
    cin>>choice;
    if (choice==1)
    {
        int final_temp=(temp*9/5)+32;
        cout<<"FINAL TEMPERATURE IS: "<<final_temp<<" F";
    }
    else if (choice==2)
    {
        int final_temp=(temp-32)*5/9;
        cout<<"FINAL TEMPERATURE IS: "<<final_temp<<" C";
    }
    else{
        cout<<"ENTER PROPER CHOICE ";
    }
    
    
}