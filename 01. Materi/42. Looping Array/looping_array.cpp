#include <iostream>
using namespace std;

int main() {
    // looping array untuk c++11 ke atas
    /*
        for(declarasi variable : array){
            statment
        }
    */
   int nilaiArray[10] = {0,1,2,3,4,5,6,7,8,9};
   for(int nilai : nilaiArray) {
    cout << "address " << &nilai << " nilainya adalah " << nilai << endl;
    nilai = 1; // tidak akan mengubah nilai dari arraynya
   }
   
   cout << endl;

   // memanipulasi array dengan referensi
   for(int &nilaiRef : nilaiArray) {
    nilaiRef *= 3;
   }

   cout << endl;

   for(int &nilaiRef : nilaiArray) {
    cout << "address " << &nilaiRef << " nilainya adalah " << nilaiRef << endl;
   }

   system("pause");
   return 0;
}