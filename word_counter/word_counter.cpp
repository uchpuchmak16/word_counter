

#include <iostream>
#include <fstream>
#include <string>

            int main() {
            std::string wordToFind;
            std::string filename;
            std::string word;
            int count = 0;
            

            
            std::cout << "Enter the word to count: ";
            std::cin >> wordToFind;

            
            std::cout << "Enter the filename: ";
            std::cin >> filename;

            
            std::ifstream file(filename);
            if (!file.is_open()) {
                std::cerr << "Could not open the file." << std::endl;
                return 1;
            }

            
            while (file >> word) {
                if (word == wordToFind) {
                    ++count;
                }
            }

            
            file.close();

            std::cout << "The word '" << wordToFind << "' occurs " << count << " times in the file." << std::endl;

            return 0;
        }