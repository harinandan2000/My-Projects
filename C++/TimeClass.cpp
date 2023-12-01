//A class implementation of time entity which can create time objects, take inputs, add and display them.

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int mins;
    int sec;

public:
    Time()
    {
        hour = mins = sec = 0;
    }

    Time(int h, int m, int s)
    {
        hour = h;
        mins = m;
        sec = s;
    }

    Time add(Time t1)
    {
        Time t3;
        t3.hour = t1.hour + hour;
        t3.mins = t1.mins + mins;
        t3.sec = t1.sec + sec;

        if (t3.sec >= 60)
        {
            t3.sec -= 60;
            t3.mins++;
        }

        if (t3.mins >= 60)
        {
            t3.mins -= 60;
            t3.hour++;
        }

        return t3;
    }

    void display()
    {
        cout << hour << ":" << mins << ":" << sec;
    }

    void input()
    {
        cout << "Enter Hour Minutes and Seconds" << endl;
        cin >> hour >> mins >> sec;
    }
};

int main()
{
    // Time t1(2, 35, 50), t2(3, 40, 30);
    Time t1, t2;
    cout << endl;
    t1.input();
    cout << endl;
    t2.input();
    cout << endl;

    Time t = t1.add(t2);
    t1.display();
    cout << " + ";
    t2.display();
    cout << " = ";
    t.display();

    return 0;
}