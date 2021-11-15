#include <stdio.h>


int main(){

    char conceito;

    printf ("\n\nDigite o conconceito de um aluno na disciplina:  Introdução à Programação");
    scanf("%*c%c",&conceito);

    if (conceito == 'A'){
        printf("\nExcelente\n\n");
    }

    else{
        if (conceito=='B') {
        printf ("\nÓtimo\n\n");
    }     
    
    else {
        if (conceito=='C'){
         printf ("\nBOM\n\n");
    }

    else{
        if(conceito=='D'){
         printf("\nRegular\n\n");
    }

    else {
        if (conceito=='E'){
         printf ("\nRuim\n\n");
    }

    else {
         if (conceito== 'F'){
         printf ("\nNos vemos de novo ano que vem...\n\n");
    }

    else 
         printf ("\nEntrada invalida\n\n");
    }
    }
    }
    }
    }




    return 0;
}