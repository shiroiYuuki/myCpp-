#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;
        // constructor
        Player(const char* nama){
            Player::nama = nama;
            cout << "player " << Player::nama << " dibuat" << endl;
        }
        
        // destructor # akan di jalankan ketika di hapus
        ~Player(){
            cout << "player " << Player::nama << " dihapus" << endl;
            
        }
};

void membuatPlayerStack(){
    Player stackPlayer = Player("stack");
} // stack akan otomatis di hapus ketika melewati tutup kurawal, dan gk bisa di akses ini lagi di manapun

void membuatPlayerHeap(){
    Player* heapPlayer = new Player("heap"); // setiap kita bikin new harus kita delete
    delete heapPlayer; // mendelete data heap
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("heap");
    playerPointer = heapPlayer; // disini tidak perlu pakai '&' karena sudah addressnya
    // delete heapPlayer; // kita harus mendelete ini di luar
}

Player createStackPlayer(){
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}

Player* createHeapPlayer(){
    Player* heapPlayer = new Player("heap di create");
    return heapPlayer;
}

int main() {
    membuatPlayerStack();
    membuatPlayerHeap();

    // simulasi memory leak
    cout << "\n Memory Leak" << endl;
    Player* playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    // cout << (*playerPointer1).nama << endl; // tidak terjadi apa apa

    Player* playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl; // leak memory
    playerPointer2->nama = "acak acakan";
    cout << playerPointer2->nama << endl; // leak memory dan memodifikasi memory itu
    delete playerPointer2; // kalo kita ngepassing object lewat pointer maka kita harus mendelet lagi di luar scopenya, maka ini jadi out of scope, memory leak memory.
    // cout << playerPointer2->nama << endl; // memory free, memory sudah di hapus.
    
    cout << "\nReturn Object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl;

    Player* playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap-> nama << endl;
    delete playerReturnHeap;

    return 0;
} // data stack di memori akan di hapus ketika melewati kurung kurawal ini tapi tidak dengan heap
// di java dan pemrograman lain lainnya, garbage collectionnya sudah ada auto, tapi kalo di c++ itu harus manual