#include <iostream>
#include "Rectangle.h"
#include "Cube.h"
#include "StockageObjet2D.h"

int main() {
    StockageObjet2D stockage;  // Cr�ation d'une instance de StockageObjet2D
    Objet2D* objet;  // Pointeur vers Objet2D

    int choix, dim1, dim2;

    std::cout << "Choisir l'objet � cr�er :\n1. Rectangle\n2. Carr�\n";
    std::cin >> choix;

    // Cr�ation du Rectangle ou Cube selon le choix
    if (choix == 1) {
        std::cout << "Entrez la longueur et la largeur : ";
        std::cin >> dim1 >> dim2;
        objet = new Rectangle(dim1, dim2);  // Cr�ation d'un Rectangle
        stockage.ajouter(objet);  // Ajout du Rectangle au stockage
    }
    else if (choix == 2) {
        std::cout << "Entrez le c�t� du carr� : ";
        std::cin >> dim1;
        objet = new Cube(dim1);  // Cr�ation d'un Cube
        stockage.ajouter(objet);  // Ajout du Cube au stockage
    }
    else {
        std::cout << "Choix invalide\n";
        return 1;
    }

    // Affichage des informations des objets stock�s
    std::cout << "Informations des objets stock�s :\n";
    stockage.afficherInfos();

    // Ajouter un autre objet � un index sp�cifique (par exemple, ajouter � l'index 0)
    Objet2D* autreRectangle = new Rectangle(6, 8);
    stockage.ajouter(0, autreRectangle);  // Remplacer l'objet � l'index 0

    // Affichage apr�s ajout/replacement d'un objet
    std::cout << "Apr�s remplacement de l'objet � l'index 0 :\n";
    stockage.afficherInfos();

    return 0;
}
