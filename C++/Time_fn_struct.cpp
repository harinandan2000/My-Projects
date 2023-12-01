// Time Addition Using structure as function argument and return value

#include <iostream>
using namespace std;

struct time
{
    int hours;
    int minutes;
    int second;
};

struct time add(struct time t1, struct time t2)
{
    struct time t3;
    t3.hours = 0;
    t3.minutes = 0;
    t3.second = 0;

    t3.second = t1.second + t2.second;
    if (t3.second >= 60)
    {
        t3.second = t3.second - 60;
        t3.minutes = t3.minutes + 1;
    }

    t3.minutes = t1.minutes + t2.minutes;
    if (t3.minutes >= 60)
    {
        t3.minutes = t3.minutes - 60;
        t3.hours = t3.hours + 1;
    }

    t3.hours = t1.hours + t2.hours+t3.hours;

    return t3;
}

int main()
{
    struct time t1, t2, t3;

    cout << "Enter the value of Hours1 :-  ";
    cin >> t1.hours;
    cout << "Enter the value of Hours2 :-  ";
    cin >> t2.hours;

    cout << "Enter the value of Minutes1 :-  ";
    cin >> t1.minutes;
    cout << "Enter the value of Minutes2 :-  ";
    cin >> t2.minutes;

    cout << "Enter the value of Second1 :-  ";
    cin >> t1.second;
    cout << "Enter the value of Second2 :-  ";
    cin >> t2.second;

    t3 = add(t1, t2);

    cout<<t1.hours<<":"<<t1.minutes<<":"<<t1.second;
    cout<<" + ";
    cout<<t2.hours<<":"<<t2.minutes<<":"<<t2.second;
    cout<<" = ";
    cout<<t3.hours<<":"<<t3.minutes<<":"<<t3.second;
    return 0;
}
