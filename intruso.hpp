#include <iostream>
#include <string>
#include <map>
#include <vector>

class Intruso{
    private:
        std::vector<std::vector<char>>digitadas;
    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};

