#include <iostream>
#include <fstream>

int main() 
{
    // Writing to a text file
    std::ofstream textFile("text_file.txt");
    textFile << "Hello, this is a text file." << std::endl;
    textFile.close();

    // Writing to a binary file
    std::ofstream binaryFile("binary_file.dat", std::ios::binary);
    int data = 42;
    binaryFile.write(reinterpret_cast<const char*>(&data), sizeof(data));
    binaryFile.close();

    return 0;
}
