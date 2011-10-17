/* 
 * File:   neuron.h
 * Author: toliveira
 *
 * Created on 13 de Outubro de 2011, 09:48
 */

#ifndef neuron_H
#define	neuron_H


#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

class neuron {
public:
    neuron();
    neuron(int conections);
    virtual ~neuron();
    string toString();
    void correctWeight(int i, double delta);
    void correctBias(double delta);
    void randomize(int val);
    double getBias();
    void setBias(double bias);
    int getSize();
    double* getweights();
    double getWeight(int i);
    void setWeight(int i, double weights);
    void setweights(double *weights);
private:
    double *weights;
    double bias;
    int size;
};

#endif	/* _neuron_H */

