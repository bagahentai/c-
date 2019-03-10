#ifndef JUZHENG_H
#define JUZHENG_H

#include <iostream>
#include <string>

class JuZheng
{
    friend std::ostream &operator<<( std::ostream &, const JuZheng &);
    friend std::istream &operator>>( std::istream &, JuZheng &);

    private:
        std::string hang1;
        std::string hang2;
        std::string hang3;
};

#endif // JUZHENG_H
