#include <iostream>
using namespace std;

class bidangDatar {
protected:
	int x, y; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { // 
		x = 0;
		y = 0;
	}
	virtual void input() {} // fungsi yang menerima input 
	virtual float Luas(int a) { return 0; } // fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } // fungsi untuk menghitung keliling
	virtual void cekUkuran() {} //fungsi untuk mengecek ukuran jika < 10 = kecil, jika <20 = sedang, jika > 40 = besar   
	void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { // fungsi untuk membaca/mengambil nilai dalam x
		return x, y;
	}
};

class Lingkaran : public bidangDatar {
public:
	float Luas() {
		return (x * x * 3.14); //rumus Luas = pi * r^2
	}
	float Keliling() {
		return (2 * x * 3.14); //rumus Keliling = 2 * pi * r
	}
	void input() {
		int a;
		cout << "\nLingkaran dibuat" << endl;
		cout << "Masukkan jejari: ";
		cin >> a;
		setX(a); // mengatur nilai x dengan nilai jejari yang diinput
		cout << "Luas Lingkaran = " << Luas() << endl; // menampilkan luas lingkaran
		cout << "Keliling Lingkaran = " << Keliling() << endl; // menampilkan keliling lingkaran
		cout << "Ukuran lingkaran adalah";
		cekUkuran();
	}
	void cekUkuran() {
		if (x <= 10) {
			cout << "Ukuran lingkaran adalah kecil\n" << endl;
		}
		else if (x <= 20) {
			cout << "Ukuran lingkaran adalah sedang\n" << endl;
		}
		else if (x > 40) {
			cout << "Ukuran lingkaran adalah besar\n" << endl;
		}
		else {
			cout << "Ukuran lingkaran tidak diketahui\n" << endl;
		}
	}

};

class Persegipanjang : public bidangDatar {
public:
	float Luas() {
		return (y * x); // 
	}
	float Keliling() {
		return (x + y); //
	}
	void input() {
		int a;
		int y;
		cout << "Persegi panjang dibuat" << endl;
		cout << "Masukkan panjang: ";
		cin >> a;
		cout << "Masukkan Lebar: ";
		cin >> y;
		setX(a); // mengatur nilai x dengan nilai sisi yang diinput
		setX(y);
		cout << "Luas Persegi panjang = " << Luas() << endl; // menampilkan luas persegi panjang
		cout << "Keliling Persegi panjang = " << Keliling() << endl; // menampilkan keliling persegi panjang
		cekUkuran();
	}
	void cekUkuran() {
		if (x <= 10) {
			cout << "Ukuran persegi panjang adalah kecil\n" << endl;
		}
		else if (x <= 20) {
			cout << "Ukuran persegi panjang adalah sedang\n" << endl;
		}
		else if (x > 40) {
			cout << "Ukuran persegi panjang adalah besar\n" << endl;
		}
	}
};

int main() {
	char ch;

	do {
		bidangDatar* bi;
		Lingkaran Li;
		Persegipanjang Bu;

		bi = &Li; // pointer bi menunjuk ke objek Lingkaran
		bi->input(); // memanggil fungsi input() dari objek Lingkaran melalui pointer bi
		bi = &Bu; // pointer bi menunjuk ke objek Bujursangkar
		bi->input(); // memanggil fungsi input() dari objek Bujursangkar melalui pointer bi

		cout << "\nApakah anda ingin mengulang program?  y/n\n";
		cin >> ch;

	} while ((ch == 'y'));

	return 0;

}


