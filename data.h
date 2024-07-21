/*
 *  Makra, vahy a bias hodnoty
 */

#ifndef DATA_H
#define DATA_H

#define IMAGE_WIDTH 28
#define IMAGE_HEIGHT 28
#define IMAGE_SIZE IMAGE_WIDTH * IMAGE_HEIGHT // pocet prvkov vstupneho vektora (obrazok ma 28x28=784 pixelov)
#define NUMBER_OF_NEURONS 10 // pocet neuronov
#define NUMBER_OF_WEIGHTS NUMBER_OF_NEURONS * IMAGE_SIZE // pocet vah

extern double bias[NUMBER_OF_NEURONS]; // pole bias hodnot
extern double weights[NUMBER_OF_WEIGHTS]; // pole vah (pocet vah jedneho neuronu je IMAGE_SIZE)

#endif //DATA_H


