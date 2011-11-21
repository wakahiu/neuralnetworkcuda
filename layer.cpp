/* 
 * File:   layer.cpp
 * Author: tiago
 * 
 * Created on 2 de Novembro de 2011, 19:47
 */

#include "layer.h"


layer::layer() {
}

layer::layer(int n, int connections) {
    this->neurons = new neuron[n];
    this->output = new double(n);
    this->size =n;
    for (int i=0; i < this->size; i++){
        this->neurons[i] = neuron(connections);
        this->f = new activationfunction;
    }
}

layer::~layer() {
    delete neurons;
    delete f;
    delete output;
}

layer::compute(double* input){
    for (int i=0; i< this->size; i++){
        this->output[i] = f->function(net(i,input));
    }
}

string layer::toString() {
    string s;
    {
        std::ostringstream ss;
        ss << this->size;
        s = ss.str();
    }
    return "[" + s + "]";
}

double layer::getOutput(int i){
    return this->output[i];
}

double* layer::getOutputs(){
    return this->output;
}

neuron layer::getNeuron(int i){
    return this->neurons[i];
}

int layer::getNeuronsSize(){
    return this->neurons[0].getSize();
}

int layer::getSize(){
    return this->size;
}

double layer::net(int neuron, double* input){
    double s=0;
    	    for (int i = 0; i < this->getSize(); i++) {
			s += input[i] * this->getNeuron(neuron).getSize(i);
    }
    s -= this->neurons[neuron].getBias();
    return s;
}


neuron* layer::getNeuron() {
    return this->neurons;
}