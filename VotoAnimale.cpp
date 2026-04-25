#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {
	
	int voto;
	
	// Inserimento voto
	
	cout << "Preferisci il gatto o il cane?";
	cout << "\nVota '1' per il gatto, '2' per il cane";
	
	cout << "\n\nVoto: ";
	cin >> voto;
	
	// struttura condizionale voto scelto
	
	if (voto == 1) {
		
		cout << "\nHai votato: gatto!";
		
	}
	
	else if (voto == 2) {
		
		cout << "\nHai votato: cane!";
		
	}
	
	else {
		
		cout << "\nVoto inserito non valido";
		
	}
	
}
