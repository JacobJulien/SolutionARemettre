// but : . Le programme vérifie qu'il y a bien
//			5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
//			deuxième chiffre sur la deuxième ligne, ainsi de suite

// nom : Jacob Julien
// Date : = pair impair // KM : ?????

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	int nombre1;
	// KM : Pourquoi un deuxième nombre ???
	int nombre2;

	std::cout << " Veuillez entrer un nombre à 5 chiffres : ";
	std::cin >> nombre1;

	// KM : à commenter 
	// KM : Nous n'avions pas encore vu le &&. Il fait quoi dans la vie ??
	if (nombre1 <= 99999 && nombre1 >= 10000)
	{
		// KM : Super de laisser le code en commentaire, je peux voir la trace de tes réflexions et tu étais sur la piste
		/*std::cout << nombre1 / 10000 << std::endl;
		std::cout << nombre1 / 1000 << std::endl;
		std::cout << nombre1 / 100 << std::endl;
		std::cout << nombre1 / 10 << std::endl;
		std::cout << nombre1 / 1 << std::endl;*/

		
		


	}
	

	else
	{
		std::cout << nombre1 << " ne contient pas 5 chiffres.";
	}

	
}

// KM : Manque plan de tests
