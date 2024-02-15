#include <iostream>
#include <string>
#include <fstream>

void file_copy(std::string);

int main() {
    std::string file_path = "test.txt";

    file_copy(file_path);

    return 0;
}

void file_copy(std::string path) {
    std::ifstream fin(path);
    std::ofstream fout("result.txt");

    if (!fin.is_open()) {
        std::cout << "Can't open the input file!" << std::endl;
    }

    if (!fout.is_open()) {
        std::cout << "Can't open the output file!" << std::endl;
    }
    
    std::string str;

    while (!fin.eof()) {
        str = "";
        std::getline(fin, str);
        fout << str << std::endl;
    }

    std::cout << "Text successfully copied from 'test.txt' to 'result.txt'" << std::endl;

    fin.close();
    fout.close();
}
