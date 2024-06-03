#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("log.txt");
    outfile << "TP_labS" <<std::endl;
    std::cout << "TP_labS" << std::endl;
}
