char ler_caracter(std::string arquivo, int indice)
{
    //vai ler o arquivo e pegar o seus caracteres
    std::ifstream arq;
    arq.open(arquivo.c_str());
    int cont = 0;
    char caracter;

    while (cont <= indice)
    {
        arq >> caracter;
        cont++;
    }

    arq.close();
    return caracter;
}
