#include <stdio.h>
#include <math.h>  

/**
 * 
 * @brief Progettare un algoritmo che, letto il valore r del raggio, calcoli e scriva l'area del cerchio relativo
 *
 * 
 * 
 * 
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando
 * @return ritorna il valore 0 
 */

int main(int argc, char *argv[]) {
    double raggio;  
    double area;    

    printf("Inserisci il raggio del cerchio: ");
    scanf("%lf", &raggio);

    area = M_PI * pow(raggio, 2);  // Utilizza M_PI e pow per calcolare l'area

    printf("L'area del cerchio con raggio %.2f è %.2f\n", raggio, area);

    return 0;  
}
