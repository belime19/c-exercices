#include <iostream>
#include <string>
using namespace std;

int main() {
     string mot1,mot2,a;
     cout << "Donne deux mots séparrés par un espace :";
     getline(cin,a);
     bool resultat = true;
     int i = a.find(' ');
     mot1 = a.substr(0,i);
     mot2 = a.substr(i+1,a.size());
     if(mot1.size() != mot2.size()){
        resultat = false;
     }
     else{

         for(char c : mot1){
             if(mot2.find(c) == -1){
                resultat = false;
                 break;
             }
         }
     }
     string r =  resultat ? "True" : "False";
     cout << r;
    return 0;

}
