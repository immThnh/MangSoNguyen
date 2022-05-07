#include<fstream>
#include<iostream>

using namespace std;

class MangSoNguyen
{
private:
    int* dulieu;
    int kichthuoc;
public:

    MangSoNguyen(){
    }
    MangSoNguyen(int kichthuoc)
    {
        this -> kichthuoc = kichthuoc;
    }
    friend istream& operator >> (istream& is, MangSoNguyen &msn)
    {
        cout <<"NHAP KICH THUOC MANG: " ;
        cin >> msn.kichthuoc;
        msn.dulieu = new int[msn.kichthuoc];
        for(int i = 0; i < msn.kichthuoc; i++)
        {
            cout <<"NHAP a[" << i << "] = ";
            is >> msn.dulieu[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, MangSoNguyen msn)
    {
        
        for(int i = 0; i < msn.kichthuoc; i++)
        {
            cout <<"a[" << i << "] = " << msn.dulieu[i] <<endl;
            
        }
        return os;
    }
    MangSoNguyen& operator= ( MangSoNguyen &msn)
    {
        this -> dulieu = new int[msn.kichthuoc];
        this -> kichthuoc = msn.kichthuoc;
        for(int i = 0; i < this -> kichthuoc; i++)
        {
            this -> dulieu[i] = msn.dulieu[i];
        }
        return *this;
    }
    MangSoNguyen operator+ (MangSoNguyen &msn)
    {
        int max1 = max(this -> kichthuoc, msn.kichthuoc);
        int min1 = min (this -> kichthuoc, msn.kichthuoc);
        MangSoNguyen result;
        result.dulieu = new int[max1];
        result.kichthuoc = max1;
        for(int i = 0; i < min (this -> kichthuoc, msn.kichthuoc); i++)
        {
            result.dulieu[i] = this -> dulieu[i] + msn.dulieu[i];
        }
        for(int i = min(this -> kichthuoc, msn.kichthuoc); i < max (this -> kichthuoc, msn.kichthuoc); i++)
        {
            if(max1 == this -> kichthuoc)
            {
                result.dulieu[i] = this -> dulieu[i];
            }
            else 
            {
                result.dulieu[i] = msn.dulieu[i];
            }
        }
        return result;
    }
    
    // hau to ++a;
    MangSoNguyen& operator++ ()
    {
        for(int i = 0; i < this -> kichthuoc; i++)
        {
            this -> dulieu[i]++;
        }
        return *this;
    }

    // a ++
    MangSoNguyen operator++ (int x)
    {
        MangSoNguyen result(this -> kichthuoc);
        result = *this;
        for(int i = 0; i < this -> kichthuoc; i++)
        {
           this -> dulieu[i] ++;
        }
        return result;
    }

};
