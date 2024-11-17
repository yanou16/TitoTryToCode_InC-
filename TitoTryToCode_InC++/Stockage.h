// Stockage.h

#ifndef STOCKAGE_H
#define STOCKAGE_H

#include "Objet2D.h"
#include <vector>
#include <memory>

class Stockage {
private:
    std::vector<std::shared_ptr<Objet2D>> objets;

public:
    
    void ajouter(std::shared_ptr<Objet2D> obj);
    void ajouter(std::shared_ptr<Objet2D> obj, size_t index);
    void afficherInfos() const;

    ~Stockage() = default;
};

#endif
