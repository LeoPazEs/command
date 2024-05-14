#include <iostream>
#include <string>
#include "command.hpp"
#include "invoker.hpp"

void Invoker::set_no_inicio(Command *c)
{
    this->no_inicio = c;
};

void Invoker::set_no_final(Command *c)
{
    this->no_final = c;
};

void Invoker::fazer_algo_importante()
{
    std::cout << "--------------------------------------\n";
    std::cout << "Invoker: Fazendo algo importante antes\n";
    if (this->no_inicio)
    {
        this->no_inicio->execute();
    }
    std::cout << "--------------------------------------\n";

    std::cout << "Invoker: Fazendo algo importante agora\n";

    std::cout << "--------------------------------------\n";
    std::cout << "Invoker: Fazendo algo importante depois\n";
    if (this->no_final)
    {
        this->no_final->execute();
    }
    std::cout << "--------------------------------------\n";
};
