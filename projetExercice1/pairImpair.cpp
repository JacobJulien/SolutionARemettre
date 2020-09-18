// But : Dire si un nombre est pair ou impair

//Nom : Jacob Julien
//Date: 2020/09/14 (Doit recommencer, fichier déjà existant corromptu



#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	int nombre1;
	int nombre2;

	// KM : Manque commentaire
	std::cout << " Veuillez entrer un nombre : ";
	std::cin >> nombre1;
	// KM : Manque commentaire
	if (nombre1 % 2 == 0)
	{
		std::cout << nombre1 << " est pair.";
	}

	else
	{
		std::cout << nombre1 << " n'est pas pair.";
	}


	return 0;
}
	// KM : Manque plan de tests
