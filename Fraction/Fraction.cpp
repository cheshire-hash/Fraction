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
        if (d > 0) 
            this->denominator = d;
        this->numerator = n;
    }
    void Init() {
        numerator = 1;
        denominator = 1;
    }
    Fraction& Sum(Fraction& fr) {
        Fraction rez;
        rez.numerator = this->numerator * fr.denominator + fr.numerator * denominator;
        rez.denominator = this->denominator * fr.denominator;
        return rez;
    }
    Fraction& Subraction(Fraction& fr) {
        Fraction rez;
        rez.numerator = this->numerator * fr.denominator - fr.numerator * denominator;
        rez.denominator = this->denominator * fr.denominator;
        return rez;
    }
    Fraction& Multiplay(Fraction& fr) {
        Fraction rez;
        rez.numerator = this->numerator * fr.denominator;
        rez.denominator = this->denominator * fr.denominator;
        return rez;
    }
    Fraction& Divite(Fraction& fr) {
        Fraction rez;
        rez.numerator = this->numerator * fr.denominator;
        rez.denominator = this->denominator * fr.numerator;
        return rez;
    }
};

int main() {
    Fraction obj;
    obj.Init(5, 10);
    Fraction obj2;
    obj2.Init(2, 5);
    Fraction a = obj.Sum(obj2);
    a.Print();
}