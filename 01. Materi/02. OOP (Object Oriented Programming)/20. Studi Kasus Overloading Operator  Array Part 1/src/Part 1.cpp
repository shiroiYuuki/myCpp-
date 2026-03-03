#include <iostream>
#include <array>
#include <iomanip>
#include <cstddef>


int main(int argc, char const *argv[])
{
    int data[5] = {0,1,2,3,4};

    std::cout << data << std::endl;

    std::cout << "[ ";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << "]" << std::endl;
    
    std::array<int, 5> data_array = {5,6,7,8,9};

    std::cout << "Masukkan array dengan ukuran " << data_array.size() << std::endl;
    std::cout << "Index" << std::setw(15) << "nilai" << std::endl;
    
    for (std::size_t i = 0; i < data_array.size(); i++)
    {
        std::cout << std::setw(5) << i;
        std::cout << std::setw(15) << data_array[i] << std::endl;
    }
    
    
    std::cout << "\n Operator at 3 = " << data_array.at(3) << std::endl;
    std::cout << "\n Operator [] 3 = " << data_array[3] << std::endl;
    std::cout << "\n Operator front = " << data_array.front() << std::endl;
    std::cout << "\n Operator back = " << data_array.back() << std::endl;
    std::cout << "\n Operator data = " << data_array.data() << std::endl; // mengembalikan pointer


    std::array<int, 5> data_array2 = {5,6,7,8,9};

    bool isSame = (data_array == data_array2); // ini membandingkan isi
    std::cout << "\nMembandingkan kedua array, ternyata hasilnya adalah " << isSame << std::endl;
    
    int data2[5] = {0,1,2,3,4};
    bool isSame2 = (data == data2); // ini membandingkan addressnya, dan pasti akan selalu 0
    std::cout << "\nMembandingkan kedua array, ternyata hasilnya adalah " << isSame2 << std::endl;
    
    return 0;
}
