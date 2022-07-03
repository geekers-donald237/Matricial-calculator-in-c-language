#include"matrice.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int** lire_matrice(int n,int m){
    int **tab; 
    int i,j;
    tab=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){  
        tab[i]=(int*)malloc(sizeof(int)*m);
    }  
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){ 
        printf("entrer la valeur de la composante %d %d de votre tableau\n",(i+1),(j+1));
        scanf("%d",&tab[i][j]);
        }
        printf("\n"); 
    }
	return tab;
 }
void afficher_matrice(int n,int m,int **A){
	int i,j;
	printf("la matrice est\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
int** alloue_matrice(int n,int m){
    int **A;
   
    int i;
    A=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){  
        A[i]=(int*)malloc(sizeof(int)*m);
    }  
    return A;
}
int** multiplication_matrice(int**A,int **B,int n,int m ,int p){
    int i,j,k;
    int**C;
    C=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){  
        C[i]=(int*)malloc(sizeof(int)*p);
    }  
        for(i=0;i<n;i++){ 
            for(j=0;j<p;j++){ 
                C[i][j]=0;
                for(k=0;k<m;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
    return C;
} 
int **transposee(int n,int m,int **tab1){
    int **tab2;
    int i,j;
    tab2=alloue_matrice(m,n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            tab2[i][j]=tab1[j][i];
        }
    }         
        return tab2;
}
int trace(int n,int m,int **A){
    int i,j,s;
    s=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                s=s+A[i][j];
            }else{
                s=s;
            }
        }
    }
    return s;
}
int**add_matrice(int n,int m,int**A,int**B){
    int i,j; 
    int **C;
    C=alloue_matrice(n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    return C;
}       

int sum_elmt(int n,int m,int **A){
    int i,j,s;
    s=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            s=s+A[i][j];
        }
    }
    return s;
}
