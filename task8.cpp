// task8.cpp - 25 elementli massivde max, min, ededi ve hendesi orta hesablanmasi
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int n = 25;
    double a[n];

    cout << "25 element daxil edin: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    double sum = 0, product = 1;
    double max = a[0], min = a[0];

    for(int i = 0; i < n; i++){
        sum += a[i];
        product *= a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    double arithmeticMean = sum / n;
    double geometricMean = pow(product, 1.0/n);

    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;
    cout << "Ededi orta: " << arithmeticMean << endl;
    cout << "Hendesi orta: " << geometricMean << endl;

    return 0;
}
