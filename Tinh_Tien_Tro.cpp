#include <iostream>
using namespace std;

void Tong(int dien, int nuoc){
	int tientro = 2000000, rac = 15000, wife = 30000, tong = 0, tongdien = 0, tongnuoc = 0;
	tongdien = dien * 4000;
	tongnuoc = nuoc * 10000;
	tong = tongdien + tongnuoc + tientro + rac + wife;
	cout << "Tong tro thang nay = " << tong << endl;
	
}

int main(){
	int dien, nuoc;
	cout << "Nhap dien: ";		cin >> dien;
	cout << "Nhap nuoc: "; 	cin >> nuoc;
	Tong(dien, nuoc);
	return 0;
}


