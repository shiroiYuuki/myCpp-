#include <iostream>

using namespace std;

int main(){

	int a = 5;
	float b = 6.67f;
	char c = 'd';

	cout << (int)b << endl; // mengubah var B menjadi Int
	cout << a + (int)b << endl; // mengubah var B menjadi Int

	cout << (char)(c + a) << endl; // mengubah var B menjadi Int

	cin.get();
	return 0;
}