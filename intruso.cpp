#include <map>
#include <vector>
#include <string>
#include "intruso.hpp"

void Intruso::set_senha_vazada(std::string vazou){
    std::vector<char> senha;
    std::cout<<"1";
    for(int i=20; i<30; i++){
        if(vazou[i]!=' '){
            switch(vazou[i]){
                case 'A':{
                    senha.push_back(vazou[0]);
                    senha.push_back(vazou[2]);
                    break;
                }
                case 'B':{
                    senha.push_back(vazou[4]);
                    senha.push_back(vazou[6]);
                    break;
                }
                case 'C':{
                    senha.push_back(vazou[8]);
                    senha.push_back(vazou[10]);
                    break;
                }
                case 'D':{
                    senha.push_back(vazou[12]);
                    senha.push_back(vazou[14]);
                    break;
                }
                case 'E':{
                    senha.push_back(vazou[16]);
                    senha.push_back(vazou[18]);
                    break;
                }
            }
            digitadas.push_back(senha);
        }
    }
}
                
std::string Intruso::crack_senha(){
    // Com base em vector<char> digitadas;
    std::string senhaVazada;
    for (int i=0;i<5;i++){
        //Comparar o 1° dígito da senha 1 com o 1° da senha 2
        if(digitadas[0][2*1] == digitadas[1][2*i]){
            senhaVazada[2*i] = digitadas[0][2*i];
            senhaVazada[2*i+1] = ' ';
        }
        //Comparar o 1° dígito da senha 1 com o 2° da senha 2
        else if(digitadas[0][2*1] == digitadas[1][2*i+1]){
            senhaVazada[2*i] = digitadas[0][2*i];
            senhaVazada[2*i+1] = ' ';
            }
        //Comparar o 2° dígito da senha 1 com o 1° da senha 2
        else if(digitadas[0][2*1+1] == digitadas[1][2*i]){
            senhaVazada[2*i] = digitadas[0][2*i+1];
            senhaVazada[2*i+1] = ' ';
            }
        //Compara o 2° dígito da senha 1 com o 2° da senha 2
        else if(digitadas[0][2*1+1] == digitadas[1][2*i+1]){
            senhaVazada[2*i] = digitadas[0][2*i+1];
            senhaVazada[2*i+1] = ' ';
            }
        return senhaVazada;
    }
}
