
#include <iostream>
#include "MangSoNguyen.cpp"
using namespace std;

int main()
{
    // khai bao
    MangSoNguyen a;
    MangSoNguyen b;
    cout <<"NHAP MANG A: ";
    cin >> a;
    cout <<"NHAP MANG B: ";
    cin >> b;
    cout <<"A + B = :" << a + b;
    cout <<"A++: \n"<< a++;
    cout << "++a: \n" << ++ a;
    
    cout <<"CONG 2 MANG: " << endl;
    MangSoNguyen  c = msn + msn1;
    cout << c;
    return 0;
}
