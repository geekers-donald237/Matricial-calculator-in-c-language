//mbiada_idris 21q2915
#ifndef __MATRICE_H
#define __MATRICE_H

#include "matrice.h"

int** lire_matrice(int n,int m);
    

void afficher_matrice(int n,int m,int **A);
	

int** alloue_matrice(int n,int m);


int** multiplication_matrice(int**A,int **B,int n,int m ,int p);


int **transposee(int n,int m,int **tab1);
    

int trace(int n,int m,int **A);


int**add_matrice(int n,int m,int**A,int**B);

int sum_elmt(int n,int m,int **A);
    
#endif