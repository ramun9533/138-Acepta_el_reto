#include <iostream>
using namespace std;


int main() {
	int numcasos;
	cout << "Proporcioname el numero de casos" << endl;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		cout << "Dame el caso: "<< endl;
		int n;
		cin >> n;
		int numCeros = 0;
		int divCincos = n/5;
		while (divCincos > 0){
			numCeros += divCincos;
			divCincos /= 5;
		}
		cout << "El factorial tiene la cantidad de  " << numCeros <<"  ceros seguidos" << endl;
	}
	return 0;
}