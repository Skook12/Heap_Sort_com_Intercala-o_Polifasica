void interacao_polifasica(char *compara, std::string &file1, std::string &file2, std::string &file_vazio, int *cont_compara){
	char tempc[2];
	int temp;
	std::string auxFile;
	while (1)
    {
        
        	compara[0] = ler_caracter(file1, cont_compara[0]);
        	compara[1] = ler_caracter(file2, cont_compara[1]);
		
        	
        if (compara[0] == '#' && compara[1] == '#')
        {

            // O proximo valor poderá ser outro char ou um \0
            tempc[0] = ler_caracter(file1, cont_compara[0] + 1);
            tempc[1] = ler_caracter(file2, cont_compara[1] + 1);

            if (tempc[0] == '\0' && tempc[1] == '\0')//se entrar ira terminar o programa
            {
                reset_fita(file1);
                reset_fita(file2);
                break;
            }
            else if (tempc[0] == '\0')
            {
                // Acabou fita 1 e ainda tem resto na fita 2
                
                grava_char('\0', file_vazio);
                cont_compara[0] = 0;
                cont_compara[1]++;
                auxFile = file_vazio; //processo de troca de fitas
                file_vazio = file1; 
                file1 = auxFile; 
                reset_fita(file_vazio);
                
            }
            else if (tempc[1] == '\0')
            {
                // Acabou fita 2 e ainda tem resto na fita 1
                grava_char('\0', file_vazio);
                cont_compara[1] = 0;
                cont_compara[0]++;
                auxFile = file_vazio; //processo de troca de fitas
                file_vazio = file2;
                file2 = auxFile;
                reset_fita(file_vazio);
                
            }
            else
            {
                // O proximo char é um charactere
                cont_compara[0]++;
                cont_compara[1]++;

                grava_char('#', file_vazio);
            }
        }
        else // os valores sao diferentes de #
        {
            temp = menorValor(compara,cont_compara);
            if(temp == 3){//se for igual a 3 vai escerrar o codigo
            	reset_fita(file1);
                reset_fita(file2);
            	break;
			}else{
            grava_char(compara[temp], file_vazio);
            cont_compara[temp]++;
			}
            
        }
    }
}
