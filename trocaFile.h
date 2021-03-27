int trocaFile(std::string &file_name)//vai ficar alternando as fitas
{
    if (file_name == "fita1.txt")
    {
        file_name = "fita2.txt";
        return 0;
    }

    if (file_name == "fita2.txt")
    {
        file_name = "fita1.txt";
        return 0;
    }
}
