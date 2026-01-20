#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;

    cout << "masukkan angka buat menghitung angkar dari X: ";
    cin >> x;

    double y = sqrt(x);
    cout << "akarnya adalah: " << y;

    system("pause");
    return 0;
}





















/* 

fungsi / function / method same thing 
DRY = Don't repeat yourself

===========================================
        📘 CMATH CHEATSHEET - C++
===========================================

🧩 PANGKAT & AKAR
-------------------------------------------
| Fungsi       | Kegunaan                 | Contoh            | Hasil |
|---------------|--------------------------|--------------------|--------|
| pow(x, y)     | x pangkat y              | pow(2, 3)          | 8      |
| sqrt(x)       | Akar kuadrat             | sqrt(16)           | 4      |
| cbrt(x)       | Akar pangkat tiga        | cbrt(8)            | 2      |
| hypot(x, y)   | √(x² + y²) (Pythagoras)  | hypot(3, 4)        | 5      |

🧮 TRIGONOMETRI (pakai radian)
-------------------------------------------
| Fungsi       | Kegunaan                 | Contoh            | Hasil (≈) |
|---------------|--------------------------|--------------------|------------|
| sin(x)        | Sinus                    | sin(π/2)           | 1          |
| cos(x)        | Cosinus                  | cos(0)             | 1          |
| tan(x)        | Tangen                   | tan(π/4)           | 1          |
| asin(x)       | Arcsin                   | asin(1)            | 1.57 (π/2) |
| acos(x)       | Arccos                   | acos(0)            | 1.57 (π/2) |
| atan(x)       | Arctan                   | atan(1)            | 0.785 (π/4) |

📈 LOGARITMA & EKSPONENSIAL
-------------------------------------------
| Fungsi       | Kegunaan                 | Contoh            | Hasil (≈) |
|---------------|--------------------------|--------------------|------------|
| log(x)        | Log natural (basis e)    | log(2.71828)       | 1          |
| log10(x)      | Log basis 10             | log10(1000)        | 3          |
| exp(x)        | e pangkat x              | exp(1)             | 2.71828    |

🧾 PEMBULATAN ANGKA
-------------------------------------------
| Fungsi       | Kegunaan                 | Contoh            | Hasil |
|---------------|--------------------------|--------------------|--------|
| ceil(x)       | Bulat ke atas            | ceil(2.3)          | 3      |
| floor(x)      | Bulat ke bawah           | floor(2.8)         | 2      |
| round(x)      | Bulat ke terdekat        | round(2.5)         | 3      |
| trunc(x)      | Buang desimal            | trunc(2.9)         | 2      |

🔢 NILAI & PERBANDINGAN
-------------------------------------------
| Fungsi       | Kegunaan                 | Contoh            | Hasil |
|---------------|--------------------------|--------------------|--------|
| abs(x)        | Nilai absolut            | abs(-9)            | 9      |
| fmin(a, b)    | Nilai terkecil           | fmin(5, 2)         | 2      |
| fmax(a, b)    | Nilai terbesar           | fmax(5, 2)         | 5      |

💡 CATATAN:
- Semua fungsi berada di header <cmath>
- Semua sudut trigonometri dalam RADIAN
- Gunakan M_PI untuk π (dari cmath)
  Contoh: sin(90 * M_PI / 180)

===========================================

*/
