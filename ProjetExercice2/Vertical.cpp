// but : . Le programme v�rifie qu'il y a bien
//			5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
//			deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite

// nom : Jacob Julien
// Date : = pair impair

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	int nombre1;
	int nombre2;

	std::cout << " Veuillez entrer un nombre � 5 chiffres : ";
	std::cin >> nombre1;

	if (nombre1 <= 99999 && nombre1 >= 10000)
	{
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