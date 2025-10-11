#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ulang;
    string member;
    do
    {
        cout << "\n *untuk saat ini cuman bisa fubuki, shiori, mumei, zeta \n";
        cout << "masukkan member Hololive: ";
        cin >> member;
        int number;
        if (member == "fubuki" || member == "Fubuki" || member == "FUBUKI")
        {
            number = 1;
        }
        else if (member == "shiori" || member == "Shiori" || member == "SHIORI")
        {
            number = 2;
        }
        else if (member == "mumei" || member == "Mumei" || member == "MUMEI")
        {
            number = 3;
        }
        else if (member == "zeta" || member == "Zeta" || member == "ZETA")
        {
            number = 4;
        }

        switch (number)
        {
        case 1:
            cout << "pilihan yang bagus " << member << " adalah jadi dia itu fox wife \n"
                 << endl;
            break;
        case 2:
            cout << "pilihan yang bagus " << member << " I can fix her \n"
                 << endl;
            break;
        case 3:
            cout << "pilihan yang bagus " << member << " she's not mooming anymore \n"
                 << endl;
            break;
        case 4:
            cout << "pilihan yang bagus " << member << " Ahh~~ jangan dong~ \n"
                 << endl;
            break;
        default:
            cout << "itu saha? \n";
        }
        cout << "anda ingin mengulangnya? (y/n): ";
        cin >> ulang;
        if (ulang == 'y' || ulang == 'Y')
        {
            number = 0;
        }

    } while (ulang == 'y' || ulang == 'Y');
    return 0;
}

/*

Kesalahan saat pembuatan code ini:
=========================================================================================
1.  Kutip tunggal dan kutip ganda
    -------------------------------------------------------------------------
    • Kutip tunggal  ' '  → Hanya untuk char tunggal (1 karakter saja).
      Contoh: 'a', 'Z', '7'
      ✔ Tipe datanya: char

    • Kutip ganda   " "  → Untuk **string/teks** (bisa 1 huruf atau lebih).
      Contoh: "a", "Z", "7", "fubuki"
      ✔ Tipe datanya: const char* (C-string) atau std::string

    ❌ Kesalahan:
       if(ulang == "y" || ulang == "Y")  // ulang bertipe char
       // Perbandingan char dengan string → tipe data tidak cocok.

    ⚠️ Akibat:
       - Kompilasi gagal / muncul error “invalid operands to binary expression”.
       - Program tidak bisa dijalankan.

=========================================================================================
2.  Salah meletakkan input di dalam switch
    -------------------------------------------------------------------------
    Kesalahan:
        switch (number) {
            ...
            cout << "anda ingin mengulangnya? (y/n): ";
            cin >> ulang;
        }

    ⚠️ Akibat:
       - Input untuk mengulang hanya dibaca setelah switch selesai diproses.
       - Alur program jadi sulit diatur (misal, prompt muncul pada case yang tidak
         sesuai atau hanya muncul di kondisi tertentu).

    ✔ Perbaikan:
       Pindahkan input "ulang" ke luar switch,
       agar selalu dieksekusi setelah semua case selesai.

=========================================================================================
3.  Menaruh input awal di luar do-while
    -------------------------------------------------------------------------
    Kesalahan:
        cout << "Masukkan member: ";
        cin >> member;
        // diletakkan sebelum do { ... } while();

    ⚠️ Akibat:
       - Saat program mengulang, prompt “Masukkan member” tidak muncul lagi.
       - User langsung diminta memilih ulang tanpa tahu harus input apa.
       - Dan outputnya akan seperti ini:
         -------------------------------------------------------------------------
         untuk saat ini cuman bisa fubuki, shiori, mumei, zeta 
         masukkan member Hololive: fubuki 
         pilihan yang bagus fubuki adalah jadi dia itu fox wife 
         anda ingin mengulangnya? (y/n): y 
         pilihan yang bagus fubuki adalah jadi dia itu fox wife
         -------------------------------------------------------------------------
         (si user tidak bisa memasukkan inputnya lagi.)

    ✔ Perbaikan:
       Letakkan prompt + input member di dalam blok do { ... },
       agar setiap pengulangan selalu menampilkan pertanyaan.
=========================================================================================


Untuk membedakan char dan string, ingat rumus cepat:
→ Char = Single (pakai Single quote ' ')
→ String = Double (pakai Double quote " ")

*/