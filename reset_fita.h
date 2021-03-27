void reset_fita(std::string file_name)//vai criar as fitas no inicio e ou limpalas caso existam
{
    std::ofstream arquivo;
    arquivo.open(file_name.c_str(), std::ios::trunc);
    arquivo.close();
}
