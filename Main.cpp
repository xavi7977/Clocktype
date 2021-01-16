Main.cpp
#include <iostream>

using namespace std;

#include "clockType.h"

int main()

{

int hours,minutes,seconds;
    
cout<<"Enter the time in 24hour-notation."<<endl;
cout<< "Enter the numbers of hours:"<<endl;
cin>>hours;
cout<<"Enter the number of minutes"<<endl;
cin>>minutes;
cout<<"Enter the number of seconds"<<endl;
cin>>seconds;
ct.setTime(hours,minutes,seconds);
cout<<"The time is";
ct.printTime();
cout<<"The elapsed time of the day is: "<< ct.elapsedTime()<<"seconds"<<endl;
cout<<"The remaining time of the day is: "<< ct.remainingTime()<<"seconds"<<endl;
cout<<"Enter the time of clock 1 in 24-hour"<<"notation."<<endl;
cout<<"Enter the number of hours:"<<endl;
cin>>hours;
cout<<"Enter the number of minutes:"<<endl;
cin>>minutes;
cout<<"Enter the number of seconds:"<<endl;
cin>>seconds;
ct1.setTime(hours,minutes,seconds);
cout<<"The time of clock 1 is:";
ct1.printTime();
cout<<"Enter the time of clock 2 in 24-hour"<<"notation."<<endl;
cout<<"Enter the number of hours:"<<endl;
cin>>hours;
cout<<"Enter the number of minutes:"<<endl;
cin>>minutes;
cout<<"Enter the number of seconds:"<<endl;
cin>>seconds;
ct2.setTime(hours,minutes,seconds);
cout<<"The time of clock 2 is:";
ct2.printTime();
ct1.difference(ct2);
system("pause");
return 0;

}
