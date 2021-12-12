#include <iostream>
using namespace std;

int main (){
	float gajikaryawan, umrdaerah;
	
	// INPUT//
	
	cout << "--------- << GAJI KARYAWAN (UMR) >> ----------" << endl;
	cout << endl;
	
	cout << "Dibuat Oleh: Muhammad Restu Halim" << endl;
	cout << "NPM: 2117051081" << endl;
	cout << "Kelas: B (Ilmu Komputer)" << endl;
	cout << endl;
	
	cout << "Gaji Karyawan \t : "; cin >> gajikaryawan;
	cout << "Umr Daerah \t : "; cin >> umrdaerah;
	
	cout << endl << endl;
	
	//OUTPUT//
	
	cout << "---------- << KETERENGAN UMR >> ---------------" << endl;
	cout << endl;
	
	if (gajikaryawan > umrdaerah){
	cout << "Gaji anda diatas umr";
	} else if (gajikaryawan < umrdaerah){
	cout << "Gaji anda dibawah umr";
	} else if (gajikaryawan == umrdaerah){
	cout << "Gaji anda setara umr";
	}
}
