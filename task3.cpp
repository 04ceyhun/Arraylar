// task3.cpp - Massivdə ilk və son 0 elementləri arasındakı məsafə
#include <iostream>
using namespace std;

int zeroDistance(const int a[], int n){
    int first = -1, last = -1;

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            if(first == -1) first = i;
            last = i;
        }
    }
    if(first == -1 || last == -1) return -1;
    return last - first;
}

int main(){
    int n;
    cout << "Massivin sayını daxil edin: ";
    cin >> n;

    int a[200];
    cout << "Elementləri daxil edin: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    int dist = zeroDistance(a, n);

    if(dist == -1)
        cout << "Massivdə iki ədəd 0 tapılmadı.";
    else
        cout << "Məsafə: " << dist;

    return 0;
}
