#include <iostream>
#include <string>

using namespace std;

class denganConstructor{
    public:
        string data;

        denganConstructor(const char* data){
            denganConstructor::data = data;
        }

        void show(){
            cout << "ini " << denganConstructor::data << endl;
        }
};

class tanpaConstructor{
    public:
        string data;

        void show(){
            cout << "ini " << tanpaConstructor::data << endl;
        }
};


int main() {

    // 1. cara membuat object tanpa constructor
    tanpaConstructor object1;
    object1.data = "object 1";
    object1.show();

    // 2. cara membuat object dengan constructor
    denganConstructor object2 = denganConstructor("object 2");
    object2.show();

    // 3. cara lain membuat object dengan contructor
    denganConstructor object3("object 3");
    object3.show();

    // 4. cara membuat object pada heap memory
    denganConstructor* object4 = new denganConstructor("object 4");
    (*object4).show(); // dengan cara dereference
    object4->show(); // arrow operator. mapping function atau attribute dari pointer
    
    string data = object4 -> data;
    cout << data << endl;
    
    // kenapa why?
    // DenganConstructor object5; # tidak akan bisa
    // object5 = DenganConstructor("object 5");

    denganConstructor* object5;
    object5 = new denganConstructor("object 5");
    object5->show(); // arrow operator. mapping function atau attribute dari pointer

    return 0;
}