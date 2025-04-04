#include <iostream>
#include <string>
using namespace std;

struct Jogo
{
    string nome; // nome do jogador
    float preco; // preco do jogador
    int horas;   // quantidade de horas jogadas
    float custo; // valor por hora jogadas
};

Jogo adquirir(const string &titulo, float valor);
void atualizar(Jogo &jogo, float valor);
void jogar(Jogo &jogo, int tempo);
void exibir(const Jogo &jogo);

int main()
{
}