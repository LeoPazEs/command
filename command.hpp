#if !defined(COMMANDER)
#define COMMANDER
class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

#endif // COMMANDER
