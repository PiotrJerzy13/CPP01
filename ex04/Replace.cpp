#include "Replace.hpp"

void Replace::process(const std::string& filename, const std::string& s1, const std::string& s2)
{
    if (s1.empty() || s2.empty()) 
	{
        std::cerr << "Error: s1 and s2 must not be empty." << std::endl;
        return;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) 
	{
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) 
	{
        content += line + '\n';
    }
    inputFile.close();

    std::string modifiedContent = replaceOccurrences(content, s1, s2);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) 
	{
        std::cerr << "Error: Cannot create output file " << filename << ".replace" << std::endl;
        return;
    }

    outputFile << modifiedContent;
    outputFile.close();

    std::cout << "Replacement completed. " << filename << ".replace" << std::endl;
}


std::string Replace::replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2) 
{
    std::string result;
    size_t pos = 0, prev = 0;

    while ((pos = content.find(s1, prev)) != std::string::npos) 
	{
        result.append(content, prev, pos - prev);
        result.append(s2);
        prev = pos + s1.length();
    }

    result.append(content, prev, std::string::npos);

    return result;
}
