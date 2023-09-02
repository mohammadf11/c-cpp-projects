#include "person.h"
class manager : public person
{
};

class bank
{
public:
    QVector<manager> manager;
};
