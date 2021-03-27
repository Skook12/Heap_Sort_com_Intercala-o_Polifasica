int getInput(char *input)//ira pegar a entrada do teclado e retornar o seu tamanho
{
    char c;
    int i = 0;

    do
    {
        c = getchar();

        if (c == '\n')
            break;
        if (c != ' ')
        {
            input[i] = c;
            i++;
        }
    } while (c != '\n');

    return i;
}
