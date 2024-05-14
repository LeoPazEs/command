#include <string>
#include <iostream>
#include "command.hpp"
#include "reciever.hpp"

#if !defined(COMPLEXCOMMAND)
#define COMPLEXCOMMAND
class ComplexCommand : public Command
{
private:
    Reciever *reciever_;
    std::string a_;
    std::string b_;

public:
    ComplexCommand(Reciever *reciever, const std::string a, const std::string b) : reciever_(reciever), a_(a), b_(b) {}
    void execute() override
    {
        std::cout << "ComplexCommand: Comando Complexo\n";
        this->reciever_->faca_algo(this->a_);
        this->reciever_->faca_algo_diferente(this->b_);
    }
};

#endif // COMPLEXCOMMAND
