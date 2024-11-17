#include "Cube.h"
#include <iostream>  


Cube::Cube(int tcote) : Objet2D(tcote, tcote) {  
    cote = tcote; 
}


int Cube::getPerimetre() {
    return 12 * cote;  
}


int Cube::getAire() {
    return 6 * cote * cote;  
}

std::string Cube::afficheInfo() {
    return "Cube: Cote = " + std::to_string(cote);  
}
