/*	
	Source by Kelas Terbuka
	Modified by Rizky Khapidsyah 
*/

#include <iostream>

using namespace std;

int main()
{
	//Assignment Variabel: Bilangan Bulat
	int a = 5;
	long b = 6;
	short c = 7;

	//Assignment Variabel: Bilangan Desimal
	float d = 1.0;
	double e = 1.7;

	//Assignment Variabel: Karakter/Character
	char f = 'a';

	//Assignment Variabel: Decision/Boolean
	bool g = true;

	//Menampilkan Properti Dari Variabel Ke Layar
	cout << "-------------" << endl << "INTEGER" << endl << "-------------" << endl;
	cout << "Nilai Variabel a: " << a << endl;
	cout << "Tipe Data: Integer" << endl;
	cout << "Panjang: " << sizeof(a) << " bytes" << " (32bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<int>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<int>::min() << "\n" << endl;

	cout << "-------------" << endl << "LONG" << endl << "-------------" << endl;
	cout << "Nilai Variabel b: " << b << endl;
	cout << "Tipe Data: Long" << endl;
	cout << "Panjang: " << sizeof(b) << " bytes" << " (32bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<long int>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<long int>::min() << "\n" << endl;

	cout << "-------------" << endl << "SHORT" << endl << "-------------" << endl;
	cout << "Nilai Variabel c: " << c << endl;
	cout << "Tipe Data: Short" << endl;
	cout << "Panjang: " << sizeof(c) << " bytes" << " (8bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<short>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<short>::min() << "\n" << endl;

	cout << "-------------" << endl << "FLOAT" << endl << "-------------" << endl;
	cout << "Nilai Variabel d: " << d << endl;
	cout << "Tipe Data: Float" << endl;
	cout << "Panjang: " << sizeof(d) << " bytes" << " (32bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<float>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<float>::min() << "\n" << endl;

	cout << "-------------" << endl << "DOUBLE" << endl << "-------------" << endl;
	cout << "Nilai Variabel e: " << d << endl;
	cout << "Tipe Data: Double" << endl;
	cout << "Panjang: " << sizeof(e) << " bytes" << " (64bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<double>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<double>::min() << "\n" << endl;

	cout << "-------------" << endl << "CHAR" << endl << "-------------" << endl;
	cout << "Nilai Variabel f: " << f << endl;
	cout << "Tipe Data: Char" << endl;
	cout << "Panjang: " << sizeof(f) << " bytes" << " (4bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<char>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<char>::min() << "\n" << endl;

	cout << "-------------" << endl << "BOOLEAN" << endl << "-------------" << endl;
	cout << "Nilai Variabel g: " << g << endl;
	cout << "Tipe Data: Boolean" << endl;
	cout << "Panjang: " << sizeof(g) << " bytes" << " (4bit)" << endl;
	cout << "Nilai Maksimum: " << numeric_limits<bool>::max() << endl;
	cout << "Nilai Minimum: " << numeric_limits<bool>::min() << "\n" << endl;


	cin.get();
	return 0;
}