#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "functions.h" // ReLU funkcia a pomocne funkcie
#include "data.h" // Makra, vahy a bias hodnoty
int rezim1(){
    int i,indx,hran, pren = 2;
    scanf("%d",&indx);
    if(indx<0 || indx>9)
        rezim1();
    i=indx*IMAGE_SIZE;
    hran=i+IMAGE_SIZE;
    for(i;i<hran;++i){
        (pren % 10) != 1 ? printf("%10.2lf", weights[i]) : printf("%10.2lf\n", weights[i]);
        pren++;

    }
}
int rezim2(double* Data){
    int i=0,indx,hran=0;
    double sucet;
    int j = 0;
    scanf("%d",&indx);
    load_data(Data, IMAGE_SIZE);
    if(indx<0 || indx>9)
        rezim2(Data);
    i=indx*IMAGE_SIZE;
    hran=i+IMAGE_SIZE;
    for (i; i < hran; ++i) {
        sucet = sucet + Data[j] * weights[i];
        j++;
    }
    printf("%.2lf",sucet + bias[indx]);
}
int rezim3(){
    double cislo;
    scanf("%lf",&cislo);
    printf("%.2lf", relu(cislo));
}
void softmax(double *output,double *input){
    int len = 10;
    double max_val = input[0];
    for (int i = 1; i < len; i++) {
        if (input[i] > max_val) {
            max_val = input[i];
        }
    }
    for (int i = 0; i < len; i++) {
        output[i] = exp(input[i] - max_val);
    }
    double sum = 0.0;
    for (int j = 0; j < len; j++) {
        sum += exp(input[j] - max_val);
    }
    for (int i = 0; i < len; i++) {
        output[i] = output[i] / sum;
    }
}
int rezim4(){
    double cisla, soft_cisla[10], vystup_cisla[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &soft_cisla[i]);
    }
    softmax(vystup_cisla,soft_cisla);
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", vystup_cisla[i]);
    }
}
int findmax(double *pole){
    int len = 10,index=0;
    double max_val = pole[0];
    for (int i = 1; i < len; i++) {
        if (pole[i] > max_val) {
            max_val = pole[i];
            index = i;
        }
    }
    return index;
}
int rezim5(){
    double vstup[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &vstup[i]);
    }
    printf("%d", findmax(vstup));
}
int rezim6(double *Data){
    load_data(Data,IMAGE_SIZE);
    print_image(Data,IMAGE_WIDTH,IMAGE_HEIGHT);
}
int rezim7(double *Data){
    double pole[9],prav_trieda[9];
    int i=0,hran,j;
    double sucet;
    load_data(Data, IMAGE_SIZE);
    hran=IMAGE_SIZE;
    for (int k = 0; k < 10; ++k) {
        j = 0;
        sucet = 0;
        i = k*IMAGE_SIZE;
        hran = i + IMAGE_SIZE;
        for (i; i < hran; ++i) {
            sucet = sucet + Data[j] * weights[i];
            j++;
        }
        sucet = sucet+bias[k];
        pole[k]=sucet;
    }
    softmax(prav_trieda,pole);
//    for (int i = 0; i < 10; i++) {
//        printf("%10.2lf ", prav_trieda[i]);
//    }
    printf("%d", findmax(prav_trieda));
}

int main() {
    double Data[784];
    int rezim;
    scanf("%d",&rezim);
    if (rezim<0 || rezim>7)
        main();
    switch (rezim) {
        case 1:
            rezim1();break;
        case 2:
            rezim2(Data);break;
        case 3:
            rezim3();break;
        case 4:
            rezim4();break;
        case 5:
            rezim5();break;
        case 6:
            rezim6(Data);break;
        case 7:
            rezim7(Data);break;
        default:
            scanf("%d",&rezim);
    }
    return 0;
}
