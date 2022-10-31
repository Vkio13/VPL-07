#include <map>
#include <vector>
#include "intruso.h"

class Intruso{
    vector<char> digitadas;
    vector<digitadas> senha;
    public:
        void set_senha_vazada(std::string vazou){
            novaSenha = new senha;
            for(int i=20; i<; i++){
                if(senha[i]!=' '){
                    switch(vazou[i]){
                        case "A"{
                            digitadas.push_back(vazou[0]);
                            digitadas.push_back(vazou[2]);
                            break;
                        }
                        case "B"{
                            digitadas.push_back(vazou[4]);
                            digitadas.push_back(vazou[6]);
                            break;
                        }
                        case "C"{
                            digitadas.push_back(vazou[8]);
                            digitadas.push_back(vazou[10]);
                            break;
                        }
                        case "D"{
                            digitadas.push_back(vazou[12]);
                            digitadas.push_back(vazou[14]);
                            break;
                        }
                        case "E"{
                            digitadas.push_back(vazou[16]);
                            digitadas.push_back(vazou[18]);
                            break;
                        }
                    }
                    digitadas.push_back(novaSenha);
                }
            }
        }
        std::string crack_senha();
};
