#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring functions as friends

    // METHOD 1
    //  friend int Calculator ::sumRealComplex(Complex, Complex);
    //  friend int Calculator ::sumCompComplex(Complex, Complex);

    //METHOD 2
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}


int main(){
    Complex c1, c2, sumn;
    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    Calculator calc;
    int ans=calc.sumRealComplex(c1, c2);
    cout << ans;

    return 0;
}