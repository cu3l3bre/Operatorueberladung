#include <iostream>
#include <string>

using namespace std;


int add(int zahl1, int zahl2)
{
	return zahl1 + zahl2;
}


// Defintion der Klasse Punkt
class Punkt
{
public:
	int x;
	int y;
};



// Funktion, die 2 Punkte addiert
Punkt addierePunkte(Punkt punkt1, Punkt punkt2)
{
	Punkt ergebnisPunkt;


	ergebnisPunkt.x = punkt1.x + punkt2.x;
	ergebnisPunkt.y = punkt1.y + punkt2.y;

	return ergebnisPunkt;
}






// Funktion, die 2 Punkte addiert -> in dieser Form ist das jetzt neu #Operatoruberladung
Punkt operator+(Punkt punkt1, Punkt punkt2)
{
	Punkt ergebnisPunkt;


	ergebnisPunkt.x = punkt1.x + punkt2.x;
	ergebnisPunkt.y = punkt1.y + punkt2.y;

	return ergebnisPunkt;
}





int main()
{
	cout << "Programm zu Operatorueberladung" << endl << endl;

	int ergebnis1 = add(3,5);
	cout << ergebnis1 << endl;
	



	Punkt p1;
	Punkt p2;

	p1.x = 1;
	p1.y = 1;

	p2.x = 4;
	p2.y = 4;




	Punkt p3 = addierePunkte(p1,p2);
	cout << p3.x << " " << p3.y << endl;

	Punkt p4 = p1 + p2;
	cout << p4.x << " " << p4.y << endl;
	


	system("pause");
	return 0;
}
