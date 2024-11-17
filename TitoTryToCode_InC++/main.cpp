#include <iostream>
#include "Rectangle.h"
#include "Cube.h"
#include "StockageObjet2D.h"

int main() {
    StockageObjet2D stockage;  // Création d'une instance de StockageObjet2D
    Objet2D* objet;  // Pointeur vers Objet2D

    int choix, dim1, dim2;

    std::cout << "Choisir l'objet à créer :\n1. Rectangle\n2. Carré\n";
    std::cin >> choix;

    // Création du Rectangle ou Cube selon le choix
    if (choix == 1) {
        std::cout << "Entrez la longueur et la largeur : ";
        std::cin >> dim1 >> dim2;
        objet = new Rectangle(dim1, dim2);  // Création d'un Rectangle
        stockage.ajouter(objet);  // Ajout du Rectangle au stockage
    }
    else if (choix == 2) {
        std::cout << "Entrez le côté du carré : ";
        std::cin >> dim1;
        objet = new Cube(dim1);  // Création d'un Cube
        stockage.ajouter(objet);  // Ajout du Cube au stockage
    }
    else {
        std::cout << "Choix invalide\n";
        return 1;
    }

    // Affichage des informations des objets stockés
    std::cout << "Informations des objets stockés :\n";
    stockage.afficherInfos();

    // Ajouter un autre objet à un index spécifique (par exemple, ajouter à l'index 0)
    Objet2D* autreRectangle = new Rectangle(6, 8);
    stockage.ajouter(0, autreRectangle);  // Remplacer l'objet à l'index 0

    // Affichage après ajout/replacement d'un objet
    std::cout << "Après remplacement de l'objet à l'index 0 :\n";
    stockage.afficherInfos();

    return 0;
}
