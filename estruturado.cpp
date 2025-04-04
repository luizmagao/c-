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
    // variavel do tipo jogo
    Jogo gow;

    // chamada de funções
    gow = adquirir("Gow", 160.0f);
    exibir(gow);

    jogar(gow, 5);
    exibir(gow);
}

Jogo adquirir(const string &titulo, float valor)
{
    Jogo novo;
    novo.nome = titulo;
    novo.preco = valor;
    novo.horas = 0;
    novo.custo = valor;
    return novo;
}

void atualizar(Jogo &jogo, float valor)
{
    jogo.preco = valor;

    if (jogo.horas > 0)
        jogo.custo = jogo.preco / jogo.horas;
}

void jogar(Jogo &jogo, int tempo)
{
    jogo.horas += tempo;

    if (jogo.horas > 0)
        jogo.custo = jogo.preco / jogo.horas;
}

void exibir(const Jogo &jogo)
{
    cout << jogo.nome << " R$"
         << jogo.preco << " "
         << jogo.horas << "h = R$"
         << jogo.custo << "/h\n";
}