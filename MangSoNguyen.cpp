#include<fstream>
#include<iostream>

using namespace std;

class MangSoNguyen
{
private:
    int* dulieu;
    int kichthuoc;
public:

    friend istream& operator >> (istream& is, MangSoNguyen &msn)
    {
        cout <<"NHAP KICH THUOC MANG: " ;
        cin >> msn.kichthuoc;
        // for(int i = 0; i < msn.kichthuoc; i++)
        // {
        //     cout <<"NHAP a[" << i << "] = ";
        //     is >> msn.dulieu[i];
        // }
        for(int i = 0; i < 3; i++)
        {
            cout <<"NHAP a[" << i << "] = ";
            is >> msn.dulieu[i];
        }
        return is;
    }

    
};
