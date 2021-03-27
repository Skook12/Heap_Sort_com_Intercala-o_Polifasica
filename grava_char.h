void grava_char(char character, std::string nome_arq)
{
    // Adiciona char em um arquivo
    std::ofstream arquivo; //abri arquivo de escrita
    arquivo.open(nome_arq.c_str(), std::ios::app);
    arquivo << character;
    arquivo.close();
}
