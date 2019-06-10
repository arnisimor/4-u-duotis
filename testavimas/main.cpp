#include <algorithm>
#include<vector>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <exception>
#include "Vector.h"

using std::string;
using std::vector;

class stud
{
private:
string vardas_;
string pavarde_;
Vector <int> nd_;
int egzaminas_;
double mediana_;
double galb_;

public:
string vardas() const {return vardas_;}
string pavarde() const {return pavarde_;}
Vector<int> nd() const {return nd_;}
double mediana() const {return mediana_;}
double galb() const {return galb_;}
void set_vardas(string vardas) {vardas_ = vardas;}
void set_pavarde(string pavarde) {pavarde_ = pavarde;}
void set_nd(Vector<int> nd) {nd_ = nd;}
void set_egzaminas(int egzaminas) {egzaminas_ = egzaminas;}
void set_mediana(double mediana) {mediana_ = mediana;}
void set_galb(double galb) {galb_ = galb;}

void median();
void finalinis();

};


int main()
{

auto start = std::chrono::high_resolution_clock::now();
unsigned int sz = 1000000;
Vector <int> v1;
for (int i = 1; i <= sz; ++i)
v1.push_back(i);
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end-start;
std::cout<<sz<< " studentu std::vector <int> push backinimo trukme: "<<std::fixed<<std::setprecision(7)<< diff.count() << " s\n";

start = std::chrono::high_resolution_clock::now();
Vector <int> v2;
for (int i = 1; i <= sz; ++i)
  v2.push_back(i);
end = std::chrono::high_resolution_clock::now();
diff = end-start;
std::cout<<sz<< " studentu Vector <int> push backinimo trukme: "<<std::fixed<<std::setprecision(7)<< diff.count() << " s\n";
std::cout<<std::endl;
std::cout<<"----------------------------------------------------------------------------"<<std::endl;
std::cout<<std::endl;
 start = std::chrono::high_resolution_clock::now();
stud a;
Vector <stud> v3;
for (int i = 1; i <= sz; ++i)
v3.push_back(a);
 end = std::chrono::high_resolution_clock::now();
 diff = end-start;
std::cout<<sz<< " studentu std::vector <stud> push backinimo trukme: "<<std::fixed<<std::setprecision(7)<< diff.count() << " s\n";

start = std::chrono::high_resolution_clock::now();
Vector <stud> v4;
for (int i = 1; i <= sz; ++i)
  v4.push_back(a);
end = std::chrono::high_resolution_clock::now();
diff = end-start;
std::cout<<sz<< " studentu Vector <stud> push backinimo trukme: "<<std::fixed<<std::setprecision(7)<< diff.count() << " s\n";
}
