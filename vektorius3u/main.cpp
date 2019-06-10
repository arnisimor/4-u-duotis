#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <random>
#include "stud.h"
#include "Funkcijos.h"
#include "Vector.h"


using std::cin;
using std::cout;
using std::string;


int main()
{
Vector <stud> x;
nuskaitymas(x);
if(x.size()==0){
return 0;
}
else
    {
    print2(x);
    }
}
