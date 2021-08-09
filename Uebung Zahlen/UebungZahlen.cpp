#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double zahl1, zahl2, zahl3, summe, summenMittelwert; // Speicherbereich/Variablen festlegen.
	cout << "Erste Zahl eingeben: " << endl;	// Programmablauf/Logik.
	cin >> zahl1;
	cout << "Ihre Erste Zahl: " << zahl1 << endl;
	cout << "Zweite Zahl eingeben: " << endl;
	cin >> zahl2;
	cout << "Ihre Zweite Zahl: " << zahl2 << endl;
	cout << "Dritte Zahl eingeben: " << endl;
	cin >> zahl3;
	cout << "Ihre Dritte Zahl; " << zahl3 << endl;
	cout << endl;
	cout << endl;
	summe = zahl1 + zahl2 + zahl3;  // Berechnung und Ausgaben.
	cout << "Die Gesamtsumme: " << summe << endl;
	summenMittelwert = summe / 3;
	cout << "Der Mittelwert: " << summenMittelwert << endl;
	cout << setw(2);
	cout << left, cout << fixed, cout << setprecision(2);
	cout << endl;
	cout << endl;
	/* Die sind meine ersten spielerischen Erfahrungen mit Zeigern/Pointer als Programmieranfänger.
	* HIER können weitere Kommentare eingefügt werden, anders als die obigen Einzeiligen.
	*/
	int *rzahl;		// Hier wird ein Pointer/Zeiger auf die Intger Variable angelegt.
	cout << "Der Zeiger der lokalen Variable \"RZahl\" zeigt auf folgende Speicheradresse : " << &rzahl;		//Hier wird die Speicher Adresse der lokalen Variablen "RZahl1" angezeigt.
	cout << endl;
	cout << endl;
	cout << endl;

}