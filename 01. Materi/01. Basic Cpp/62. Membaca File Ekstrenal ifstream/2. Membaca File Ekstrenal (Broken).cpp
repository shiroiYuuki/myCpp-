#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile;
    string output, buffer, nama;
    bool isData = false;
    int no;

    myFile.open("dataNeed.txt");

    while(!isData){
        getline(myFile,buffer);
        output.append("\n" + buffer);
        if(buffer == "data"){
            isData = true;
        }
    }
    cout << output << endl; // mengeluarkan data yang di atas
    
    getline(myFile,buffer);
    cout << buffer << endl; // mengeluarkan kata "data"

    int jumlahData = 0;
    while(!myFile.eof()){
        myFile >> no;
        myFile >> nama;

        cout << no << "\t" << nama << endl;
        jumlahData++;
    }
    cout << "jumlah data = " << jumlahData << endl;
    system("pause");
    return 0;
}

