#ifndef INTRUSO
#define INTRUSO

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Intruso{
    std::vector<int> numeros;
    std::map<char,numeros> digitos;
    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};

#endif