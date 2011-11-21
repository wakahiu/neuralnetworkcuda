/* 
 * File:   layer.h
 * Author: tiago
 *
 * Created on 2 de Novembro de 2011, 19:47
 */

#ifndef LAYER_H
#define	LAYER_H

#include "neuron.h"
#include "activationfunction.h"
#include <sstream>
#include <string>

class layer {
public:
    layer();
    layer(int n, int connections);
    virtual ~layer();
    activationfunction *f;
    neuron *neurons;
    double *output;
    int size;
    
private:
    compute(double *input);
    int getSize();
    double* getOutputs();
    string toString();
    double getOutput(int i);
    neuron getNeuron(int i);
    int getNeuronsSize();
    double net(int neuron, double* input);
    neuron* getNeuron();

};

#endif	/* LAYER_H */

