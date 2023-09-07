#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <fstream>

void main() {

    //read preferences from a text file
    std::ifstream infile("preferences.txt");
    if(!infile.is_open())
    {
        std::cerr<< "Failed to open preferences file." << std::endl;
        return;
    }

    std::unordered_map<std::string , std::vector<std::string>> hospitalPreferences;
    std::unordered_map<std::string , std::vector<std::string>> studentPreferences;

    std::string line;

    //read hospital preferences
    
}