/* 
 * File:   activationfunction.h
 * Author: tiago
 *
 * Created on 21 de Novembro de 2011, 15:18
 */

#ifndef ACTIVATIONFUNCTION_H
#define	ACTIVATIONFUNCTION_H

#include "math.h"

class activationfunction {
public:
    activationfunction();
    virtual ~activationfunction();
    double function(double x);
    double derivate(double x);
private:

};

#endif	/* ACTIVATIONFUNCTION_H */

