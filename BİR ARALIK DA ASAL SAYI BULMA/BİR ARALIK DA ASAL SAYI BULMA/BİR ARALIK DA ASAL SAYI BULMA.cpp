#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a;
	cout << "Bir sayi giriniz";
	cin >> a;
	
int sayac = 0;

	for (int x = 0; x <= a; x++) {
		while (true) {

			
			

			for (int i = 2; i < x; i++) {
				if (x % i == 0) {
					
					sayac++;
					
				}
				else if (x == 1) {
					
					sayac++;
					
				}
				else if (x == 2) {
					cout << x<<"\n";
					sayac++;
					
				}
			}
			if (sayac == 0) {
				cout << x<< "\n";
				break;
			}
		}
	}

	






	
}



