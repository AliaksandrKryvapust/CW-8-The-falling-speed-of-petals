#include<iostream>
using namespace std;

double SakuraFall(const double v) {
    return (v < 0) ? 0 : 5*80/v;
}
int main() {
    double v = 5;
    cout << SakuraFall(v) << endl;
    return 0;
}
