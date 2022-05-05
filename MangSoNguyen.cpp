
#include <iostream>
#include "MangSoNguyen.cpp"
using namespace std;

int main()
{
    // khai bao
    MangSoNguyen msn, msn1;
    cout <<"NHAP MANG 1: ";
    cin >> msn;
    cout <<"NHAP MANH 2: ";
    cin >> msn1;
    cout << "+: " << msn + msn1 endl;
    msn1 = msn;
    cout <<"=: (GAN MSN1 = MSN) " << msn1 << endl;
    
}
