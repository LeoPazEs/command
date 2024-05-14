#include "invoker.hpp"
#include "reciever.hpp"
#include "simplecommand.hpp"
#include "complexcommand.hpp"
int main()
{
    Invoker *invoker = new Invoker();
    invoker->set_no_inicio(new SimpleCommand("Olá!"));
    Reciever *reciever = new Reciever();
    invoker->set_no_final(new ComplexCommand(reciever, "Envie email!", "Salve relatório!"));
    invoker->fazer_algo_importante();

    delete invoker;
    delete reciever;

    return 0;
}