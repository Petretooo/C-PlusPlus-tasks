#include<iostream>
#include<string>
using namespace std;
struct market {
	string ime;
	string proizvoditel;
	double cena;
	int kolichestvo;
};
void vavejdane(market produkt[], int size) {
	for (int i = 1; i <= size; i++) {
		cin.get();
		getline(cin, produkt[i].ime);
		cin.get();
		getline(cin, produkt[i].proizvoditel);
		cin >> produkt[i].cena;
		cin >> produkt[i].kolichestvo;
		cout << endl;
	}
}
void izvejdane(market produkt[], int size) {
	for (int i = 1; i <= size; i++) {
		cout <<"izvejdane " <<produkt[i].ime << endl;
		cout <<"izvejdane " <<produkt[i].proizvoditel << endl;
		cout <<"izvejdane " <<produkt[i].cena << endl;
		cout <<"izvejdane " <<produkt[i].kolichestvo << endl;	
		cout << endl;
	}
}
void elit(market produkt[], int size) {
	for (int i = 1; i <= size; i++) {
		if (produkt[i].proizvoditel == "Elite" && produkt[i].cena < 5.25) {
			cout << "savpadenie "<<produkt[i].ime << endl;
		}
	}
}
void sto(market produkt[], int size) {
	int max = INT_MIN;
	for (int i = 1; i <= size; i++) {
		if (produkt[i].kolichestvo > 100) {
			for (int j = 1; j <= size; j++) {
				if (produkt[i].cena > max) {
					max = produkt[i].cena;
				}
			}
		}
	}
	cout<<"maxa " << max << endl;
}
void proizvolen(market produkt[], string proizvolenP, int size) {
	double avarage;
	for (int i = 1; i <= size; i++) {
		if (produkt[i].proizvoditel == proizvolenP) {
			avarage = produkt[i].cena;
		}
	}
	cout <<"srednoto "<< avarage << endl;
}
int main() {
	const int n = 50;
	int x = 5;
	market produkt[n];
	vavejdane(produkt, x);
	izvejdane(produkt, x);
	elit(produkt, x);
	sto(produkt, x);
	string proizvolenP;
	cin.get();
	getline(cin, proizvolenP);
	proizvolen(produkt, proizvolenP, x);

}