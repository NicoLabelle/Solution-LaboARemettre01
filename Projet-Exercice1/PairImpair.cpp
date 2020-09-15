// But : Lit un entier et determine s'il s'agit d'un entier pair ou impair.
// Nom : Nicola Labelle
// Date : 2020-09-11

// Pour "cin" et "cout"
#include <iostream>

// Fonction principale
int main()
{
	// Pour les accents
	setlocale(LC_ALL, "");

	// Déclaration d'une variable
	int nombreEntier;

	// L'utilisateur doit entrer un nombre entier
	std::cout << "Veuillez entrer un nombre entier : ";

	// Le programme mémorise la valeur dans "nombreEntier"
	std::cin >> nombreEntier;

	// Vérifie à l'aide du modulo si le nombre entier est pair ou impair
	if (nombreEntier%2 == 0)
	{
		// Indique que le nombre est pair
		std::cout << "Votre nombre entier est pair.";
	}
	else 
	{
		// Indique que le nombre est impair
		std::cout << "Votre nombre entier est impair.";
	}

	// Indique que le programme s'est exécuté sans erreur
	return 0;
}

// Plan de tests
// KM : Penser à mettre des valeurs négatives et 0
/*
	nombreEntier		Résultat attendu
	------------		----------------
	13					Votre nombre entier est impair.
	692					Votre nombre entier est pair.
	29					Votre nombre entier est impair.
	318					Votre nombre entier est pair.
*/
