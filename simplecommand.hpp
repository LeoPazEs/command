#include <string>
#include <iostream>
#include "command.hpp"

#if !defined(SIMPLECOMMAND)
#define SIMPLECOMMAND
class SimpleCommand : public Command
{
private:
    std::string payload;

public:
    explicit SimpleCommand(std::string pay_load) : payload(pay_load) {}
    void execute() override
    {
        std::cout << "SimpleCommand: Comando Simples(" << this->payload << ")\n";
    }
};

#endif // SIMPLECOMMAND