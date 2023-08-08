#include <iostream>
#include<map>
#include <vector>
           
using namespace std;

int main() {
    std::map<std::string, std::string> countries;
    countries.insert(pair<string, string>("Armenia", "Yerevan"));
    countries.insert(pair<string, string>("USA", "Washington"));
    countries.insert(pair<string, string>("Russia", "Moscow"));
    countries.insert(pair<string, string>("UK", "London"));
    countries.insert(pair<string, string>("Germani", "Berlin"));
    for (auto pair : countries) {
        std::cout << pair.first << "-" << pair.second << std::endl;
    }
    return 0;
}
