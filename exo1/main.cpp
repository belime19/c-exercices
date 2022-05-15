#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string r = "Les entiers multiples de 5 sont:";
    ostringstream oss;
    oss << r;
    for (int i=0; i<15; i++){
        cout << "Entrer un entier:";
        int j;
        cin >> j;
        if (j%5==0){
            oss<<j<<", ";
        }
    }
    cout << oss.str();

}
