#include "stdio.h"


typedef struct Neuron
{
    float activation;
    float weight;           //should be the activation and weights of all the last
    float bias;             //layer's neurons
    float output;
    void (*activation_func)(struct Neuron*);
}Neuron;


void sigmoid(Neuron *neuron) {          //not sigmoid yet, just testing
    neuron->output = neuron->activation*neuron->weight-neuron->bias;
}



int main()
{
    Neuron neuron;
    neuron.activation_func= &sigmoid;
    neuron.bias=10;
    neuron.weight=3;
    neuron.activation=4;
    printf("output: %f",neuron.output);
    neuron.activation_func(&neuron);
    printf("output: %f",neuron.output);

}