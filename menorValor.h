int menorValor(char *vetor,int *cont_compara)
{
    //retorna indice com menor valor, e ou retorna o caracter se a comparacao ocorrer entre um \0 ou um #
    if(vetor[0] != '\0' && vetor[1] != '\0'){
    	if (vetor[0] != '#' && vetor[1] != '#')
	    {
	        if (vetor[0] <= vetor[1] && vetor[0] != '#')
	        {
	            return 0;
	        }
	        else if (vetor[1] <= vetor[0] && vetor[1] != '#')
	        {
	            return 1;
	        }
	    }
	    else if (vetor[0] == '#' && vetor[1] != '#')
	    {
	
	        return 1;
	    }
	    else if (vetor[0] != '#' && vetor[1] == '#')
	    {
	        return 0;
	    }
	}else if(vetor[0] == '\0' && vetor[1] != '\0'){
		return 1;
	}else if(vetor[1] == '\0' && vetor[0] != '\0'){
		return 0;
	}else{
		return 3;
	}
	
	    
}
