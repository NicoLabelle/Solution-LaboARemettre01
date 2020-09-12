// But : Lit un entier composé de 5 chiffres et affiche cet entier verticalement sur 5 lignes distinctes.
// Nom : Nicola Labelle
// Date : 2020-09-12

// Pour "cin" et "cout"
#include <iostream>

// Fonction principale
int main()
{
	// Pour les accents
	setlocale(LC_ALL, "");

	// Déclaration d'une variable
	int nombreEntier;

	// L'utilisateur doit entrer un nombre entier de 5 chiffres
	std::cout << "Veuillez entrer un nombre entier de 5 chiffres : ";

	// Le programme mémorise la valeur dans "nombreEntier"
	std::cin >> nombreEntier;

	// Vérifie si le nombre entier contient bien 5 chiffres
	if (nombreEntier > 9999 && nombreEntier <= 99999)
	{
		// Indique que le nombre contient bien 5 chiffres
		std::cout << "Votre nombre entier contient bien 5 chiffres.";
	}
	else
	{	// Vérifie si le nombre est inférieur ou supérieur à 5 chiffres
		if (nombreEntier < 10000)
		{
			// Indique que le nombre est inférieur à 5 chiffres
			std::cout << "Votre nombre entier est inférieur à 5 chiffres.";
		}
		else
		{
			// Indique que le nombre est supérieur à 5 chiffres
			std::cout << "Votre nombre entier est supérieur à 5 chiffres.";
		}
	}

	// Indique que le programme s'est exécuté sans erreur
	return 0;
}

// Plan de tests
/*
	nombreEntier		Résultat attendu
	------------		----------------
	13					Votre nombre entier est inférieur à 5 chiffres.
	692365				Votre nombre entier est supérieur à 5 chiffres.
	50256				Votre nombre entier contient bien 5 chiffres.
*/