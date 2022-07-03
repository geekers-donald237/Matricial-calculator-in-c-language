#include"matrice.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char*argv[]){
    int i,j,k,s;
    int**A,**B,**C;
    int n,m,p,m1,m2;
    int **tab1;
    int ** tab2;
    char caract;
    printf("entrer\n-* pour la multiplication matricielle\n-+ pour l'addition\n-T pour la transposee\n-t pour la trace\n-s pour la somme des elmts d'une matrice\n");
    printf("entrer l'operande pour votre operation matricielle a faire\n");
    scanf("%c",&caract);
    if(caract=='+'){
        do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 1\n");
            scanf("%d %d",&n,&m);
        }while(m<0 && n<0); 
        do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 2\n");
            scanf("%d %d",&m1,&p);
        }while(m2<0 && p<0);
        if(m==m1 && m==p){ 
        A=alloue_matrice(n,m);
        B=alloue_matrice(m,p);
        A=lire_matrice(n,m);
        B=lire_matrice(m,p);
        afficher_matrice(n,m,A);
        afficher_matrice(p,m,B);
        C=add_matrice(n,m,A,B);
        afficher_matrice(n,m,C); 
        }else {
        printf("vos matrice doivent etre de mm taille merci\n");
        }
    }else if(caract=='*'){
        do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 1\n");
            scanf("%d %d",&n,&m);
        }while(m<0 && n<0); 
        do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 2\n");
            scanf("%d %d",&m1,&p);
        }while(m1<0 && p<0); 
        if(p==n){
        A=alloue_matrice(n,m);
        B=alloue_matrice(m1,p);
        A=lire_matrice(n,m);
        B=lire_matrice(m1,p);
        afficher_matrice(n,m,A);
        afficher_matrice(m1,p,B);
        C=multiplication_matrice(A,B,n,m,p);
        afficher_matrice(n,p,C);   
        }else {
            printf("dsl dd dit que le nombre de ligne de l'un doit etre egal au nombre de colonnews de l'autre\n");
        }
    }else if(caract=='T'){
         do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 1\n");
            scanf("%d %d",&n,&m);
        }while(m<0 && n<0); 
        if(n==m){
        tab1=alloue_matrice(n,m);
        tab1=lire_matrice(n,m);
        printf("\n");
        afficher_matrice(n,m,tab1);
        tab2=transposee(n,m,tab1);
        afficher_matrice(n,m,tab2);
        }else {
        printf("recommencez svp vos tailles doivent etre les mm\n");
        }
    }else if(caract=='t'){
        do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 1\n");
            scanf("%d %d",&n,&m);
        }while(m<0 && n<0); 
        if(m==n){
        A=alloue_matrice(n,m);
        A=lire_matrice(n,m);
        afficher_matrice(n,m,A);
        printf("\n");
        s=trace(n,m,A);
        printf(" la trace de votre matrice est %d\n",s);
        }else{
        printf("matrice carre svp\n");
        }
    }else if(caract=='s'){
         do{
            printf("entrer le nombre de ligne et le nombre de colonnes de votre matrice 1\n");
            scanf("%d %d",&n,&m);
        }while(m<0 && n<0); 
        A=alloue_matrice(n,m);
        A=lire_matrice(n,m);
        afficher_matrice(n,m,A);
        printf("\n");
        s=sum_elmt(n,m,A);
        printf("la somme des elmts de la matrice est %d\n",s);
    }else{
        printf("votre operation n'est pas prise en compte par dd reesayer svp\n");
    }
    return 0;
}