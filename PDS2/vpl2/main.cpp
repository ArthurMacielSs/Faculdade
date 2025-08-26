#include <iostream>
#include <string>
#include <limits>

int main()
{
    int wordAmount;
   // std::cout<<"Hello World"<< std::endl;
    std::cin >> wordAmount;
    
     std::string prohibitedWords[wordAmount];
     std::string asterisks[wordAmount];
     int count[wordAmount];
     
     //std::string asterisks(word_to_replace.length(), '*');
     
     for (int i=0; i<wordAmount; i++) {
     std::cin >> prohibitedWords[i];
     asterisks[i]=(prohibitedWords[i].length(), '*');
     }
     
    std::string mainText;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline (std::cin, mainText);
    
    for(int i=0; i<wordAmount; i++){
        //std::cout<<asterisks[i]<< std::endl;
        size_t position = 0;
        while ((position = mainText.find(prohibitedWords[i], position)) != std::string::npos) {
            mainText.replace(position, prohibitedWords[i].length(), asterisks[i]);
            position = position+asterisks[i].length();
            count[i]++;
    }
    }
    std::cout<<mainText<< std::endl;
    
    for(int i=0; i<wordAmount; i++){
         std::cout << "Palavra " << prohibitedWords[i] << "substituida " << count[i] << "vezes"<<std::endl;
    }
    
    

    return 0;
}