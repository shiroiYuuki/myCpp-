#include <iostream>
#include <string>

using namespace std;

// belajar tentang friend class

// supaya safe, tanpa ini juga aman
class PersegiPanjang;

class Persegi{
    friend class PersegiPanjang; // friend ini hanya berlaku satu arah, tidak berlaku sebaliknya
    private:
        double sisi;
    public:
        Persegi(double sisi){
            this->sisi = sisi;
        }

        double luas(){
            return this->sisi*this->sisi;
        }
        
        bool islebihPanjang(const PersegiPanjang &obj){
            cout << "fungsi panjang" << endl;
            bool isTrue = this->sisi > obj.panjang;
            return isTrue;
        }
        
};

class PersegiPanjang{
    friend class Persegi; // friend class akan memberikan akses dari class yang mendeklarasikan friend
    private:
        double panjang;
        double lebar;
    public:
        PersegiPanjang(double panjang, double lebar){
            this->panjang = panjang;
            this->lebar = lebar;
        }

        double luas(){
            return this->panjang*this->lebar;
        }

        bool islebihPanjang(const Persegi &obj){
            cout << "fungsi panjang" << endl;
            bool isTrue = this->panjang > obj.sisi;
            return isTrue;
        }

};

int main(int argc, char const *argv[])
{
    /* kita buat objectnya */
    Persegi persegi = Persegi(5);
    PersegiPanjang kotak = PersegiPanjang(5,10);

    cout << "Luas Persegi = " << persegi.luas() << endl;
    cout << "Luas kotak = " << kotak.luas() << endl;
    
    bool logika = kotak.islebihPanjang(persegi);
    cout << "Apakah kotak lebih panjang dari persegi = " << logika << endl;
    return 0;
}

