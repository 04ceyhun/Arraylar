// task4.cpp - İlk yarının ədədi ortası, ikinci yarının həndəsi ortası
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int n = 20;
    double a[n];

    cout << "20 element daxil edin: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    double sum = 0;
    for(int i = 0; i < 10; i++) sum += a[i];
    double arithmeticMean = sum / 10.0;

    double product = 1;
    for(int i = 10; i < 20; i++) product *= a[i];
    double geometricMean = pow(product, 1.0 / 10);

    cout << "Ədədi orta: " << arithmeticMean << endl;
    cout << "Həndəsi orta: " << geometricMean << endl;

    return 0;
}
