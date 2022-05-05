#include<fstream>
#include<iostream>

using namespace std;

class MangSoNguyen
{
private:
    int* dulieu;
    int kichthuoc;
public:
    MangSoNguyen()
    {
        this -> dulieu 
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

    

    MangSoNguyen& operator= (MangSoNguyen msn)
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
        int max = 0;
        int min = 0;
        if(msn.kichthuoc > this ->kichthuoc)
        {
            max = msn.kichthuoc;
            min = this ->kichthuoc;
        }
        else {
            max = this ->kichthuoc;
            min = msn.kichthuoc;
        }
        MangSoNguyen result;
        result.dulieu = new int[max];
        result.kichthuoc = max;
        for(int i = 0; i < min; i++)
        {
            result.dulieu[i] = msn.dulieu[i] + (this -> dulieu[i]);
        }
        for(int i = min; i <= max; i++)
        {
            if(max == msn.kichthuoc)
            {
                result.dulieu[i] = msn.dulieu[i];
            }
            else result.dulieu[i] = this ->dulieu[i];
        }
        return result;
    }
    // ++MSN
    // MangSoNguyen& operator++()
    // {
    //     for(int i = 0; i < this -> kichthuoc; i++)
    //     {
    //         this -> dulieu[i] += 1;
    //     }
    //     return *this;
    // }
    
    //MSN++ 
    // MangSoNguyen operator++ (int x)
    // {
    //     MangSoNguyen result(*this);
    //       for(int i = 0; i < this -> kichthuoc; i++)
    //     {
    //         this -> dulieu[i] += 1;
    //     }
    //     return result;
        
    }
    
};
