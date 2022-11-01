#include <map>
#include <vector>
#include <string>
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
                std::string crack_senha(){
            // Com base em vector<char> digitadas;
            std::string senhaVazada;
            for (i=0;i<5;i++){
                //Comparar o 1° dígito da senha 1 com o 1° da senha 2
                if(digitadas[0][2*1] == digitadas[1][2*i]){
                    senhaVazada[2*i] = digitadas[0][2*i];
                    senhaVazada[2*i+1] = ' ';
                }
                //Comparar o 1° dígito da senha 1 com o 2° da senha 2
                else{if(digitadas[0][2*1] == digitadas[1][2*i+1]){
                    senhaVazada[2*i] = digitadas[0][2*i];
                    senhaVazada[2*i+1] = ' ';
                    }
                }
                //Comparar o 2° dígito da senha 1 com o 1° da senha 2
                else{if(digitadas[0][2*1+1] == digitadas[1][2*i]){
                    senhaVazada[2*i] = digitadas[0][2*i+1];
                    senhaVazada[2*i+1] = ' ';
                    }
                }
                //Compara o 2° dígito da senha 1 com o 2° da senha 2
                else{if(digitadas[0][2*1+1] == digitadas[1][2*i+1])
                    senhaVazada[2*i] = digitadas[0][2*i+1];
                    senhaVazada[2*i+1] = ' ';
                }
            }
            return senhaVazada;
            }
};
