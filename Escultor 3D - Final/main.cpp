#include <iostream>
#include <vector>
#include <fstream>
#include "Headers/sculptor.h"
#include "Headers/leitor.h"
#include "Headers/figurageometrica.h"


using namespace std;

int main(){
   Sculptor *s1;

   Leitor parser;

   vector<FiguraGeometrica*> figs;

   figs = parser.parse("ler.txt");

   s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

   for(size_t i=0;i<figs.size();i++){
    figs[i]->draw(*s1);
   }

   s1->writeOFF((char*) "Martelo.off");
   for(size_t i=0; i<figs.size(); i++){
       delete figs[i];
   }
   delete s1;
   return 0;
}

