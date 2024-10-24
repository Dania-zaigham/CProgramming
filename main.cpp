#include<iostream>
using namespace std;
class time
{
private:
    int hour;
    int min;
    int sec;

public:
    time() {
        hour= 0;
        min=0;
        sec=0;
    }
    time(int hour, int min, int sec)
    {
        setTime(hour,min,sec);
        cout<<"overloaded constructor called"<<endl;
    }
    void setTime(int hour, int min, int sec) {
        setHour(hour);
        setMin(min);
        setSec(sec);
        cout<<"setTime function called"<<endl;
    }
    void setHour(int hour) {
        time::hour=(hour>=0 && hour<24)? hour: 12;
    }
    void setMin(int min) {
        time::min=(min>=0 && min<60)? min:0;
    }
    void setSec(int sec) {
        time::sec=(sec>=0 && sec<60)? sec:0;
    }
    int getHour() {
        return hour;
    }
    int getMin() {
        return min;
    }
    int getSec() {
        return sec;
    }
    void displayUniversalTime() {
        cout<<((hour<10)? "0":"")<<hour
        <<":"<<((min<10)? "0":"")<<min
        <<":"<<((sec<10)? "0":"")<<sec<<endl;

    }
    void displayStandardTime() {
        cout<<((hour < 10) ? "0":"")<<((hour > 12 ) ? (hour-12):hour)
        <<" : "<<((min < 10) ? "0":"")<<min
        <<" : "<<((sec < 10) ? "0":"")<<sec
        <<((hour > 12) ? " PM ": " AM ")<<endl;
    }
    void tick() {
        sec++;
        if(sec>59) {
            sec=0;
            min++;
        }
        if(min>59) {
            min=0;
            hour++;
        }
        if(hour>23) {
            hour=0;
    }


};
int main()
{
    time t1();
    t1.displayUniversalTime();


    return 0;
}