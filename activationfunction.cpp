/* 
 * File:   activationfunction.cpp
 * Author: tiago
 * 
 * Created on 21 de Novembro de 2011, 15:18
 */

#include "activationfunction.h"

activationfunction::activationfunction() {
}


activationfunction::~activationfunction() {
}

activationfunction::function(double x){
    return ( 1 / (1 + exp(-x)));
}

activationfunction::derivate(double x){
    return (x * (1-x));
}