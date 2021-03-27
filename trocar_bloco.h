int trocar_bloco(int *cont_especial, std::list<char> &bloco, std::string &file_name, char *heap)//ira realizar a troca de bloco 
{
    if ((cont_especial[0] == 1) && (cont_especial[1] == 1) && (cont_especial[2] == 1))//se todos os cont_especial for 1 ira ocorrer a troca de bloco
    {

        cont_especial[0] = 0;
        cont_especial[1] = 0;
        cont_especial[2] = 0;
        bloco.push_back('#');
        // Armazena na fita
        while (!bloco.empty())
        {
            grava_char(bloco.front(), file_name);
            bloco.pop_front();
        }

        trocaFile(file_name);
        bubble_sort(heap, 3);

        return 1;
    }

    return 1;
}
