#ifndef OBJET2D_H
#define OBJET2D_H

#include <string>  

class Objet2D {
protected:
    int dim1, dim2;  

public:
    
    Objet2D(int tdim1, int tdim2);

    virtual int getPerimetre() = 0;
    virtual int getAire() = 0;
    virtual std::string afficheInfo() = 0;
    virtual ~Objet2D() {}
};

#endif
