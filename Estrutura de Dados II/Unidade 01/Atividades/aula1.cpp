#include <stdio.h>
#include <locale.h>
// Escreva um algortimo que solicite ao usu�rio N valores n�mericos e ao final apresente:
// Vers�o01: O maior e o menor
// Vers�o02: As medidas de tendencia central Media, Moda e Mediana.
// Vers�o03: Implementar Nome, Idade, Sexo e Tr�s notas dos alunos

int main(){
	
	setlocale(LC_ALL, "Portuguese"); // Console em Portugu�s
	    
    float Valor, Maior, Menor, Soma, Moda;
    int Qtd = 0, resposta, freq[100] = {0}, maior_freq = 0;
    do{
        Qtd++;
        // Entrada de dados
        printf("\n Informe o %i.� valor: ", Qtd);
        scanf("%f", &Valor);
        //freq[Valor]++;
        // Processamento de dados
        if (Qtd==1){
        	Maior = Valor;
        	Menor = Valor;
		}
        else if (Valor > Maior)
            Maior = Valor;
        else if(Valor < Menor)
            Menor = Valor;
        printf("\n Deseja informar o pr�ximo valor? 1/Sim - 2/N�o ");
        scanf("%i", &resposta);
    } while(resposta == 1);
    for (int i = 0; i < Qtd; i++){
        if (freq[i] > maior_freq){
            maior_freq = freq[i];
            Moda = i;
        }
    }
    // Criar um vetor para verificar quais numeros se repetem enquanto o usu�rio informa
    // Sa�da de dados
    printf("\n O maior: %0.2f", Maior);
    printf("\n O menor: %0.2f", Menor);
    printf("\n M�dia:  %0.2f", Soma / Qtd);
    printf("\n Moda: %0.2f", Moda);
    printf("\n Mediana: %0.2f", Menor);
    
} 



