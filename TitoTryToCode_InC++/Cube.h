#ifndef CUBE_H
#define CUBE_H

#include "Objet2D.h"  

class Cube : public Objet2D {  
private:
    int cote;  

public:
    
    Cube(int tcote);

    
    int getPerimetre() override;  
    int getAire() override;       
    std::string afficheInfo() override;  
};

#endif
