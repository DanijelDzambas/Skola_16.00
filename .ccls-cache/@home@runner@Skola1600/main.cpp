#include <iostream>
#include <stdlib.h>

#include <fstream>


using namespace std;

int main() {
    system("clear");

    string tekst;
    ifstream citaj;
    citaj.open("prva.txt");
    while(!citaj.eof()){
        getline(citaj, tekst);
        cout<<tekst<<endl;
    }
  
}