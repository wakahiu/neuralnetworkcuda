/* 
 * File:   neuron.cpp
 * Author: toliveira
 * 
 * Created on 13 de Outubro de 2011, 09:48
 */

#include "neuron.h"

/**
 * Method of constructor that inicialize the elements
 * @param connections Number of connections
 */
neuron::neuron(int connections) {
    this->weights = new double[connections];
    this->bias = 1;
    this->size = connections;
    randomize(2);  
}

/**
 * Destructor of class neuron
 */
neuron::~neuron() {
    delete this->weights;
}

/**
 * Method that return the size of neurons
 * @return the size of neurons
 */
int neuron::getSize(){
	return this->size;
}

/**
 * Method to print the value of weights and bias
 * @return The value of weights and bias
 */
string neuron::toString() {
    string b = "[";

    b.append("bias=");

    {
        std::ostringstream ss;
        ss << this->bias;
        b.append(ss.str());
    }
    b.append(";\n");

    for (int i = 0; i < this->size; i++) {
        b.append("w");
        {
            std::ostringstream ss;
            ss << i + 1;
            b.append(ss.str());
        }
        b.append("=");
        {
            std::ostringstream ss;
            ss << this->weights[i];
            b.append(ss.str());
        }
        b.append("; \n");
    }
    b.append("]");

    return b;
}

void neuron::correctWeight(int i, double delta) {
    this->weights[i] += delta;
}

void neuron::correctBias(double delta) {
    this->bias += delta;
}

void neuron::randomize(int val) {
	srand(time(NULL));
	for (int i = 0; i < this->size; i++)
        this->weights[i] = rand() % val;
}

void neuron::setweights(double *weights){
    this->weights= weights;
}	

double neuron::getWeight(int i){
    return this->weights[i];
}

void neuron::setWeight(int i,double weights){
    this->weights[i]= weights;
}

double neuron::getBias(){
    return this->bias;
}

void neuron::setBias(double bias){
    this->bias=bias;
}