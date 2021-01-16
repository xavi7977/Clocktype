clockType.h

#include <iostream>



using namespace std;

class clockType

{

public:
    void setTime(int hours, int minutes, int seconds);
    void printTime()const;
    long elapsedTime();
    long remainingTime();
    void difference (clockType& ct2);
    void getTime(int& hours, int& minutes, int& seconds)
{   
        hours=hr;
        minutes=min;
        seconds=sec; 

}
    clockType (int hours=0, int minutes=0, int seconds=0);
    
    private:
    int hr;
    int min;
    int sec;
    
};
