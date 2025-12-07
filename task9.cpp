// task9.cpp - İkinci massiv elementlerini birincinin k ve k+1 elementleri arasina elave etmek
#include <iostream>
using namespace std;

int main(){
    int n1, n2, k;
    cout << "Birinci massiv element sayini daxil edin: ";
    cin >> n1;
    int a[100];
    cout << "Birinci massiv elementlerini daxil edin: ";
    for(int i = 0; i < n1; i++) cin >> a[i];

    cout << "Ikinci massiv element sayini daxil edin: ";
    cin >> n2;
    int b[100];
    cout << "Ikinci massiv elementlerini daxil edin: ";
    for(int i = 0; i < n2; i++) cin >> b[i];

    cout << "k deyerini daxil edin (0 - n1-2 araliginda): ";
    cin >> k;

    int c[200], idx = 0;

    for(int i = 0; i <= k; i++) c[idx++] = a[i];
    for(int i = 0; i < n2; i++) c[idx++] = b[i];
    for(int i = k+1; i < n1; i++) c[idx++] = a[i];

    cout << "Yeni massiv: ";
    for(int i = 0; i < idx; i++) cout << c[i] << " ";

    return 0;
}
