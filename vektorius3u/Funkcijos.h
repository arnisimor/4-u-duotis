#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <random>
#include "stud.h"
#include "Vector.h"

void generate(int &kiekis);
void nuskaitymas(Vector <stud> &x);
void skaityti (Vector <stud> &x,int &kiekis);
void sortt(Vector <stud> &x,int &kiekis);
void print2(Vector <stud> &printable);
bool number(string const &c);
