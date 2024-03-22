#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

void Lower(std::string &word) {
    for_each(word.begin(), word.end(), [](char &c) { c = tolower(c); });
}

bool LessThan(std::pair<std::string, size_t> left, std::pair<std::string, size_t> right){
    if (left.second == right.second) return (left.first < right.first);
    return (left.second < right.second);
}

int main() {
    std::map<std::string, size_t> words;
    std::ifstream inf("story.txt");
    std::string word;
    while (inf >> word) { Lower(word); ++words[word]; }

    // display original data
    std::vector<std::pair<std::string, size_t>> freq;
    for (auto m: words) freq.push_back(m);
    sort(freq.begin(), freq.end(), LessThan);
    // display new sorted data
    std::cout << "The 10 most frequently used words are:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << (freq.crbegin() + i)->first << " " << (freq.crbegin() + i)->second << " times" << std::endl;
    }
}
