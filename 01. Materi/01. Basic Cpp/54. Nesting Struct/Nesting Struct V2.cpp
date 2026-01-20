#include <iostream>
#include <string>

using namespace std;

struct idol{
	string namaIdol;
	int debutDate;
};

struct mHololive{
	idol member_1;
	idol member_2;
	string domain;
	int gen;
};

int main(){
	idol idol1, idol2;
	mHololive holo1, holo2;

	idol1.namaIdol = "fubuki";
	idol1.debutDate = 162018;
	
	idol2.namaIdol = "matsuri";
	idol2.debutDate = 162018;

	holo1.member_1 = idol1;
	holo1.domain = "Jp";
	holo1.gen = 1;
	
	holo2.member_2 = idol2;
	holo2.domain = "Jp";
	holo2.gen = 1;

	cout << "nama idol yang pertama adalah: " << holo1.member_1.namaIdol << endl;
	cout << "domainnya adalah: " << holo1.domain << endl; 
	cout << "Dari Gen: " << holo1.gen << endl; 

	cout << "nama idol yang kedua adalah: " << holo2.member_2.namaIdol << endl;
	cout << "domainnya adalah: " << holo2.domain << endl; 
	cout << "Dari Gen: " << holo2.gen << endl; 
	
	system("pause");
	return 0;
}













