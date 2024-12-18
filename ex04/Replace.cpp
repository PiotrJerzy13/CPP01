#include "Replace.hpp"

void Replace::process(const std::string& filename, const std::string& s1, const std::string& s2) {
    // Input validation
    if (s1.empty() || s2.empty()) {
        std::cerr << "Error: s1 and s2 must not be empty." << std::endl;
        return;
    }

    // Open input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return;
    }

    // Read file content
    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    // Perform replacement
    std::string modifiedContent = replaceOccurrences(content, s1, s2);

    // Open output file
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Cannot create output file " << filename << ".replace" << std::endl;
        return;
    }

    // Write modified content
    outputFile << modifiedContent;
    outputFile.close();

    std::cout << "Replacement completed. Output written to " << filename << ".replace" << std::endl;
}

std::string Replace::replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0, prev = 0;

    // Find and replace all occurrences of s1
    while ((pos = content.find(s1, prev)) != std::string::npos) {
        result.append(content, prev, pos - prev); // Append part before s1
        result.append(s2);                       // Append replacement
        prev = pos + s1.length();                // Move past s1
    }

    // Append remaining content
    result.append(content, prev, std::string::npos);

    return result;
}
