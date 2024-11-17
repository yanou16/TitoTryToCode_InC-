// Stockage.cpp

#include "Stockage.h"
#include <iostream>  

void Stockage::ajouter(std::shared_ptr<Objet2D> obj) {
    objets.push_back(obj);
}


void Stockage::ajouter(std::shared_ptr<Objet2D> obj, size_t index) {
    if (index < objets.size()) {
        objets[index] = obj;  
    }
    else {
        objets.push_back(obj);  
    }
}


void Stockage::afficherInfos() const {
    for (const auto& obj : objets) {
        std::cout << obj->afficheInfo() << std::endl;
    }
}
