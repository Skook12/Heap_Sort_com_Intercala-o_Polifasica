void heap_sort(std::list <char> &bloco, char *heap,int indice,int *cont_especial,int tam,char *input,std::string &file_name){
	char aux;

	for (int i = 0; i <=tam; i++)//inicio do heap sort
    {

        if(i<tam){
		bloco.push_back(heap[0]);//adicionando a posicao 0 do heap no bloco
		}
        aux = heap[0];
        heap[0] = input[indice];
        indice++;

        if (aux > heap[0])//compacao se o caracter que saiu e maior que o que entrou
        {

            if (cont_especial[2] == 0)//analisando os caracteres especiais
            {
                aux = heap[0];
                heap[0] = heap[2];
                heap[2] = aux;
                if (heap[0] > heap[1])
                {
                    aux = heap[0];
                    heap[0] = heap[1];
                    heap[1] = aux;
                }
                cont_especial[2]++;
            }
            else if (cont_especial[1] == 0)//analisando caracteres especiais
            {
                aux = heap[0];
                heap[0] = heap[1];
                heap[1] = aux;
                cont_especial[1]++;
            }
            else if (cont_especial[0] == 0)//analisando caracteres especiais
            {
                cont_especial[0]++;
            }
        }
        else//se o caracter que saiu for menor ou igual do que o que entrou
        {

            if (cont_especial[2] == 0)//se os 3 caracteres ainda sao normais
            {
                bubble_sort(heap, 3);
            }
            else if (cont_especial[1] == 0)//se so possui 2 caracteres normais
            {
                if (heap[0] > heap[1])
                {
                    aux = heap[0];
                    heap[0] = heap[1];
                    heap[1] = aux;
                }
            }
        }

        trocar_bloco(cont_especial, bloco, file_name, heap);//quando todos os cont_especial forem igual a 1 ira ocorrer uma mudanca de bloco
    }
}
