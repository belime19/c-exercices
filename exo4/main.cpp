#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "entrer une valeur naturelle: ";
    int n;
    cin >> n;
    int i=1;
    while (i<=n){
        string rs = "";
        string ro = "";
        int o = n-i+1;
        int s = i-1;
        int m=o%10;
        rs.assign(s,' ');
        ro.assign(o,to_string(m)[0]);
        cout << rs << ro << endl;
        i++;
    }


    return 0;
}
