#include "command.hpp"

#if !defined(INVOKER)
#define INVOKER

class Invoker
{
private:
    Command *no_inicio;
    Command *no_final;

public:
    ~Invoker()
    {
        delete no_inicio;
        delete no_final;
    }
    void set_no_inicio(Command *c);
    void set_no_final(Command *c);
    void fazer_algo_importante();
};

#endif // INVOKER
