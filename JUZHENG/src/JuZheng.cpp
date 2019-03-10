#include "JuZheng.h"

#include <iomanip>

using namespace std;

ostream &operator<<( ostream &output, const JuZheng &number )
{
    output << " "<<number.hang1<<endl<<"["<<number.hang2<<"]"<<endl<<" "<<number.hang3<<endl;
    return output;
}

istream &operator>>( istream &input, JuZheng &number )
{
    input >> setw(3) >>number.hang1;
    input.ignore();
    input >> setw(3) >>number.hang2;
    input.ignore();
    input >> setw(3) >>number.hang3;
    return input;
}
