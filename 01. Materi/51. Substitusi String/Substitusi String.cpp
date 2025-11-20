#include <iostream>
#include <string>
using namespace std;

int main(){

    string kalimat1 ("Fubuki adalah vtuber Hololive"); // 12 13
    string kalimat2 ("Fubuki seorang vtuber");

    cout << "Kalimat Original" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // swap string
    kalimat1.swap(kalimat2);
    cout << "Swap Kalimat" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // replace string
    // kalimat.replace(index ke, panjang, diganti sebagai apa); atau
    // kalimat.replace(kalimat.find("kalimat yang dicari"), panjang, diganti sebagai apa)
    kalimat1.replace(kalimat1.find("vtuber"), 6, "streamer"); // mengganti vtuber dengan streamer
    kalimat2.replace(14, 6, "idol"); // mengganti bagian vtuber
    cout << "Replace Kalimat" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // insert string
    kalimat2.insert(14, "seorang "); // memasukkan kalimat "seseorang" di index ke-14
    cout << "Insert Kalimat" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    system("pause");
    return 0;
}