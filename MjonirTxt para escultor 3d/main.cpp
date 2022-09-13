#include <fstream>
#include <cstdlib>

using namespace::std;

int main() {
  int c;
  ofstream arquivo;
  arquivo.open("ler.txt");
  if(!arquivo.is_open()){
    exit(1);
  }
  //dimensão
  arquivo << "dim 100 100 100\n";
  //cabeço martelo
  arquivo << "putbox 4 31 4 21 5 17 0.502 0.502 0.502 1\n";
  // cabo de materlo
  arquivo<< "putbox 15 20 10 15 17 40 0.5882 0.2941 0.0 1\n";
  for (c = 17;c<40;c+=3){
    arquivo <<("cutbox 15 20 \n");
  }
    //cortes
  

  arquivo.close();
}