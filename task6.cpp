// task6.cpp - b < a[i] < c şərtini ödəyən elementlərin cəmini tapmaq
#include <iostream>
using namespace std;

int sumBetweenBC(int a[], int n, int b, int c){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > b && a[i] < c) sum += a[i];
    }
    return sum;
}

int main(){
    const int n = 10;
    int a[n];

    cout << "10 element daxil edin: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    int b, c;
    cout << "b ve c deyerlerini daxil edin: ";
    cin >> b >> c;

    int result = sumBetweenBC(a, n, b, c);
    cout << "b < a[i] < c olan elementlerin cemi: " << result;

    return 0;
}
