#include<iostream>
using namespace std;
class Fraction {
    int numerator;
    int denominator;
public:
    int GetNumerator() {
        return numerator;
    }
    void SetNumerator(int a) {
        numerator = a;
    }
    int GetDenominator() {
        return denominator;
    }
    void SetDenominator(int b) {
        if (b > 0) {
            denominator = b;
        }
    }
    void Print() {
        cout << "Numerator = " << numerator << "\t" << "Denominator = " << denominator << endl;
    }
    void Init(int n, int d) {
        if (d > 0) denominator = d;
        numerator = n;
    }
    void Init() {
        numerator = 1;
        denominator = 1;
    }
    void Sum(Fraction& fr) {
        numerator = numerator * fr.denominator + fr.numerator * denominator;
        denominator = denominator * fr.denominator;
    }
    void Subraction(Fraction& fr) {
        numerator = numerator * fr.denominator - fr.numerator * denominator;
        denominator = denominator * fr.denominator;
    }
};

int main() {
    Fraction obj;
    obj.Init(5, 10);
    obj.Print();
    Fraction obj2;
    obj2.Init(3, 6);
    obj.Sum(obj2);
    obj.Print();
}