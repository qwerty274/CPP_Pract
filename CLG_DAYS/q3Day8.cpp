#include <bits/stdc++.h>
using namespace std;

double compoundInterest(double p, double r,  int t) {
    double A = p * pow(1 + (r / (100)),  t);
    return A;
};

int main() {
    double p, r;
    int n, t;

    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "Enter Rate of interest (in %): ";
    cin >> r;
    
    cout << "Enter time in years: ";
    cin >> t;

    double amount = compoundInterest(p, r, t);
    double ci = amount - p;

    cout << "Compound Interest = " << ci << endl;
  

    return 0;
}