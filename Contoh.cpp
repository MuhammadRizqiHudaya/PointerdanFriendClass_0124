#include <iostream>
using namespace std;

class PersegiPanjang
{
public: //akses modifier
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan panjang:";
        cin >> panjang;
        cout << "Masukkan lebar:";
        cin >> lebar ;
    }

    int luasPp(int a,int b)
    {
        return a * b;
    }
    //lingkaran ol;
};

class lingkaran
{
public :
    int jarijari;

    void input()
    {
        cout << "Masukkan jarijari:";
        cin >> jarijari;
    }

    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};

int main ()
{
    PersegiPanjang objekPP; //Membuat objek
    lingkaran ol;

    cout << "Masukkan panjang :";
    cin >> objekPP.panjang;
    cout << "Masukkan lebar :";
    cin >> objekPP.lebar;
    cout << "Luas persegi panjang :"<<
    objekPP.luasPp(objekPP.panjang,objekPP.lebar)<<endl;
}