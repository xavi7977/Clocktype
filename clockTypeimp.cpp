clockTypeimp.cpp

#include <iostream>
#include "clockType.h"

class clockType;

ct,ct1,ct2;

long clockType::elapsedTime()
{
return(hr * 3600 + min * 60 + sec);
    
}

long clockType::remainingTime()
{
return ((24*3600)-(hr * 3600 + min * 60 + sec));
}    

void clockType::difference(clockType& ct2)
{
long diff;
int hrs, mins, secs;
diff=(ct1.elapsedTime()-ct2.elapsedTime());
if (diff>0)
{
hrs=(diff/3600);
mins= (diff-hrs * 3600)/60;
secs=(diff-(hrs*3600+mins*60));
cout << "The Clock 2 is far apart from the clock 1" << "by:";
if(hrs<10)
cout<<"0";
cout<<hrs<<":";
if (mins<10)
cout<<"0";
cout<<mins<<":";
if(secs<10)
cout<<"0";
cout<<secs<<endl;
}
else if (diff<0)
{
diff=(ct2.elapsedTime()-ct1.elapsedTime());
hrs =(diff/3600);
mins= (diff-hrs * 3600)/60;
secs=(diff-(hrs*3600+mins*60));
cout << "The Clock 1 is far apart from the clock 2" << "by:";
if(hrs<10)
cout<<"0";
cout<<hrs<<":";
if (mins<10)
cout<<"0";
cout<<mins<<":";
if(secs<10)
cout<<"0";
cout<<secs<<endl;
}
else 
{
cout << "Both the clock have same time" << "difference is: 00:00:00" << endl;
            
}
}
void clockType::setTime(int hours, int minutes, int seconds)
{
if(hours<0 && hours > 23)
hr=0;
else 
hr=hours;
if(minutes<0 && minutes>59)
min=0;
else
min= minutes;
if(seconds<0 && seconds > 59)
sec=0;
else
sec=seconds;
  
}
void clockType::printTime() const
{
if (hr<10)
cout<<"0";
cout<<hr<<":";
if (min<10)
cout<<"0";
cout<<min<<":";
if (sec<10)
cout<<"0";
cout<<sec<<endl;   
}
clockType::clockType(int hours, int minutes, int seconds)
{
    hr=hours;
    min=minutes;
    sec=seconds;

}
