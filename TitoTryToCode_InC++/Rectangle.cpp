#include <iostream>  

// Co#include "Rectangle.h"
nstructeur 
Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2) {
    longueur = tdim1; 
    largeur = tdim2;   
}

// Méthode 
int Rectangle::getPerimetre() {
    return 2 * (longueur + largeur); 
}


int Rectangle::getAire() {
    return longueur * largeur;  
}

// Méthode
std::string Rectangle::afficheInfo() {
    return "Rectangle: Longueur = " + std::to_string(longueur) + ", Largeur = " + std::to_string(largeur);
}
