/*
 *  ReLU funkcia a pomocne funkcie
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

double relu( double x); // aktivacna funkcia neuronovej siete
void load_data(double *data, unsigned int len); // funkcia na nacitanie hodnot do pola
void print_image(const double* img, unsigned int img_width, unsigned int img_height); // funkcia na pomocny vypis obrazku

#endif //FUNCTIONS_H




