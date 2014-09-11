//*****************************
//*Tapio Pekkarinen
//*Harjoitus 4
//*11.9.2014
//*versio 1.0
#include <iostream> 
using namespace std;
//vakioiden m‰‰rittely
#define minimi 10 //vanha tapa
const int maksimi = 20; //uusi, suositeltava tapa
//julkisten muuttujien m‰‰rittely
int summa;
// aliohjelmien esittely
void Laske(int, int);

void main() //P‰‰ohjelma alkaa
{// alkava lohkosulku
	//paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;
	cout << "Syˆt‰ luku: ";
	cin >> luku2; // Kysyy lukua
	Laske(luku1, luku2);//aliohjelma kutsu
	if (summa < minimi)
		cout << "Summa on pienempi kuin " << minimi << "\n";
	else if (summa > maksimi)
		cout << "Summa on suurempi kuin maksimi " << maksimi << "\n";
	else
		cout << "Summa on MINIMIN ja MAKSIMIN v‰liss‰";

} //lopettava lohkosulku
void Laske(int eka, int toka)
{
	summa = eka + toka;
}