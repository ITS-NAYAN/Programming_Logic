#include <iostream>
using namespace std;

int main(){
    int time;
    cout<<"ENTER TOTAL TIME IN SECONDS: ";
    cin>>time;
    
    
        int hour=time/3600;
        time=time%3600;
        int min=time/60;
        time=time%60;
        int seconds=time;
         
        cout<<"ACTUAL FORMAT NEEDED IS:"<<hour<<" hour "<<min<<" min "<<seconds<<" sec";

    
}