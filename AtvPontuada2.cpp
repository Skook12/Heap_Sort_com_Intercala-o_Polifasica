#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <list>
#include "reset_fita.h"
#include "bubble_sort.h"
#include "ler_caracter.h"
#include "grava_char.h"
#include "trocaFile.h"
#include "getInput.h"
#include "trocar_bloco.h"
#include "menorValor.h"
#include "heap_sort.h"
#include "interacao_polifasica.h"

/*Equipe: 
Rodrigo Cunha da Silva Franco
Marcos Vinicius Leal Machado
Antonio Cesar Nunes de Azevedo Filho
Amanda Bandeira Rigaud Lima
Felipe Azevedo Ribeiro
*/

// ENTRADA: I N T E R C A L A C A O B A L A N C E A D A

int main(void)
{
    char input[27], heap[3], compara[2];
    int indice = 3, cont_especial[3] = {0, 0, 0} , cont_compara[2] = {0, 0}, tam, temp;
    //cont_especial serve para identificar quais os caracters marcados
    std::list<char> bloco;
    std::string file_name = "fita1.txt";
    std::string auxFile, file1, file2, file_vazio;
	
    // Resetando as fitas
    reset_fita("fita1.txt");
    reset_fita("fita2.txt");
    reset_fita("fita3.txt");

    tam = getInput(input);//obtendo a entrada e o tamanho do input
	
    heap[0] = input[0];
    heap[1] = input[1];
    heap[2] = input[2];

    bubble_sort(heap, 3);//organizando a primeiro heap

    //guardou no bloco
    heap_sort(bloco,heap,indice,cont_especial,tam,input,file_name);//ordenacao de blocos

    grava_char('\0', "fita1.txt");
    grava_char('\0', "fita2.txt");

    // Início da interação polifásica
    file1 = "fita1.txt";
    file2 = "fita2.txt";
    file_vazio = "fita3.txt";
    
    interacao_polifasica(compara,file1,file2,file_vazio,cont_compara);//interacao polifasica

}
