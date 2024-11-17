#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Objet2D.h"  

class Rectangle : public Objet2D { 
private:
    int longueur, largeur;  

public:
    
    Rectangle(int tdim1, int tdim2);

    
    int getPerimetre() override;  
    int getAire() override;       // Calcule l'aire du rectangle
    std::string afficheInfo() override;  // Affiche les informations du rectangle
};

#endif
