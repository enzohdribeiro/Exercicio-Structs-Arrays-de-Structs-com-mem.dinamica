#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int nusp;
	float nota;
} ALUNO;

typedef struct {
    int i;
	ALUNO A[];
} TURMA;

void imprimir(TURMA* t, int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("NUSP: %5i, nota: %5.2f\n", t->A[i].nusp, t->A[i].nota);
	}
}

int contagemNotas(TURMA* t, float nota, int n) {
	int cont = 0;
	int i;

	for(i=0; i<n; i++) {
		if(t->A[i].nota >= nota) cont++;
	}

	return cont;
}


int main() {
    int n = 0; // Numero de estudantes da turma
    int i;
    float notaMin = 0;
	printf("Esse código imprime a nota dos alunos de uma certa turma,\n");
	printf("e, dado uma nota qualquer, devolve o número de estudantes\n");
	printf("com nota igual ou maior ao valor fornecido.\n");
	printf("------------------------------------------------------------\n");
	
    while(1==1){
        printf("Insira o número de estudantes da turma ou digite 0(zero) para sair:\n");
        scanf("%d", &n);
        if(n==0) break;
        
        TURMA *t = malloc(sizeof(TURMA) + n * sizeof(ALUNO));
        
        for(i=0;i<n;i++){
        printf("Insira o número USP do estudante %i\n",(i+1));
        scanf("%d", &t->A[i].nusp);
        }
        
        for(i=0;i<n;i++){
        printf("Insira a nota do estudante %i\n",(i+1));
        scanf("%f", &t->A[i].nota);
        }
        
    	imprimir(t, n);
    	
    	printf("Insira a nota mínima:\n");
    	scanf("%f", &notaMin);
    
    	printf("Alunos com nota %0.2f ou mais: %i\n",notaMin,contagemNotas(t,notaMin,n));
    	free(t);
    }	
    return 0;    
}
