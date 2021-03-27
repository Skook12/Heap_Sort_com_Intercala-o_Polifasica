void bubble_sort(char *v, int quant)//vai ordenar
{
    char aux;
    int i, j, trocou = 1;
    for (i = 0; i < quant - 1 && trocou; i++)
    {
        trocou = 0;
        for (j = 0; j < quant - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                trocou = 1;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
