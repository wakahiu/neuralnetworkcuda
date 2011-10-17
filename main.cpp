/* 
 * File:   main.cpp
 * Author: toliveira
 *
 * Created on 13 de Outubro de 2011, 09:47
 */

#include <cstdlib>
#include <iostream>
#include "neuron.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    neuron *n;
    
    n = new neuron(20);
    
    cout << n->toString() << endl;
    cout << n->getSize() << endl;
    
    
    return EXIT_SUCCESS;
}

