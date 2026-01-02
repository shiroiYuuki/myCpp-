#include <iostream>

#define id 0

#if id == 0
    #define lang "indonesia"
#else
    #define lang "inggris"
#endif

using namespace std;

int main(){
    cout << "bahasa: " << lang << endl;
    return 0;
}