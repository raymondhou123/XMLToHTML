#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

// Structure to represent CD information
struct CD {
    std::string title;
    std::string artist;
    std::string country;
    std::string company;
    double price;
    int year;
};

// Parse XML data to populate vector of CDs
void parseXML(const std::string fileName, std::vector<CD>& cds) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening file: " + fileName);
    }

    std::string line;
    std::string xmlData;
    while (std::getline(file, line)) {
        xmlData += line;
    }
    file.close();

    std::istringstream iss(xmlData);
    std::string tag;
    CD currentCD;

    // creates an array of CD objects
    while (std::getline(iss, line, '>')) {
        if (line.find("<CD") != std::string::npos) {
            currentCD = CD();
        } else if (line.find("<TITLE") != std::string::npos) {
            std::getline(iss, currentCD.title, '<');
        } else if (line.find("<ARTIST") != std::string::npos) {
            std::getline(iss, currentCD.artist, '<');
        } else if (line.find("<COUNTRY") != std::string::npos) {
            std::getline(iss, currentCD.country, '<');
        } else if (line.find("<COMPANY") != std::string::npos) {
            std::getline(iss, currentCD.company, '<');
        } else if (line.find("<PRICE") != std::string::npos) {
            std::string priceStr;
            std::getline(iss, priceStr, '<');
            currentCD.price = std::stod(priceStr);
        } else if (line.find("<YEAR") != std::string::npos) {
            std::string yearStr;
            std::getline(iss, yearStr, '<');
            currentCD.year = std::stoi(yearStr);
            cds.push_back(currentCD);
        }
    }
}

// write CD data to an HTML file
void writeHTML(const std::string& fileName, const std::vector<CD>& cds) {
    if (cds.empty()) {
        throw std::runtime_error("No CD data found in the XML file.");
    }

    std::ofstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening file: " + fileName);
    }

    // write the header of the HTML file, spaces are for the format of the file
    file << "<!DOCTYPE html>\n"
         << "<html>\n"
         << "<head>\n"
         << "   <title>CD Catalog</title>\n"
         << "</head>\n"
         << "<body>\n"
         << "   <table>\n"
         << "       <tr>\n"
         << "           <th>Title</th>\n"
         << "           <th>Artist</th>\n"
         << "           <th>Country</th>\n"
         << "           <th>Company</th>\n"
         << "           <th>Price</th>\n"
         << "           <th>Year</th>\n"
         << "       </tr>\n";

    // write each cd information into table rows 
    for (const auto& cd : cds) {
        file << "       <tr>\n"
             << "           <td>" << cd.title << "</td>\n"
             << "           <td>" << cd.artist << "</td>\n"
             << "           <td>" << cd.country << "</td>\n"
             << "           <td>" << cd.company << "</td>\n"
             << "           <td>" << std::fixed << std::setprecision(2) << cd.price << "</td>\n"
             << "           <td>" << cd.year << "</td>\n"
             << "       </tr>\n";
    }

    file << "   </table>\n"
         << "</body>\n"
         << "</html>\n";

    file.close();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <xml_file>" << std::endl;
        return EXIT_FAILURE;
    }

    try {
        std::string xmlFileName = argv[1];
        std::vector<CD> cds;

        parseXML(xmlFileName, cds);
        writeHTML("cd_catalog.html", cds);

        std::cout << "Conversion successful. Output written to cd_catalog.html" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}