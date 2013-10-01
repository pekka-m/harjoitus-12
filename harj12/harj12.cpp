/*********************************************************************
Teht„v„: HARJOITUS 12
Tekij„: Pekka Melgin
PVM: 1.10.2013
Kuvaus:
Tee ohjelma, joka kysyy k„ytt„j„lt„ kokonaisluvun v„lilt„ 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;
*********************************************************************/
#include <iostream> 
using namespace std; 
int main() 
{
	int luku;
	int rivinro = 1;
	int kertaa = 1;
	cout << "Anna luku v„lilt„ 1-9: ";
	cin >> luku;
	while (rivinro <= luku) {
		kertaa = 1;
		while (kertaa <= rivinro) {
			cout << rivinro;
			kertaa++;
		}
		rivinro++;
		cout << endl;
	}
	cout << endl;
}