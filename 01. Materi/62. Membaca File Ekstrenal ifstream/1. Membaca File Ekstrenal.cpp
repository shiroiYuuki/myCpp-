#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile;
    string data, buffer;

    myFile.open("dataNeed.txt");

    // myFile >> data; // cuman ngambil 1 kata
    // cout << data << endl;
    // myFile >> data; // mengambil kata ke 2
    // cout << data << endl;

    getline(myFile,data); // cuman ngambil 1 baris, ambil data dari myFile lalu masukkin data
    cout << data << endl;
    getline(myFile,data); // ngambil baris ke 2
    cout << data << endl;

    system("pause");
    return 0;
}