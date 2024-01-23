#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        real = img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        if (img >= 0)
            cout << real << "+i" << img;
        else    
            cout << real << "-i" << -1*img;
    }

    void input()
    {
        cout << "Enter Real part and imaginary part without i: ";
        cin >> real >> img;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;

        return temp;
    }
};