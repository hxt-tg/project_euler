#include <map>
#include <iostream>

using namespace std;
typedef unsigned int ui;

std::map<unsigned int, unsigned int> LINKS, LEN;

#define SIZE  1000000
#define next(x) ((x) & 1 ? 3*(x)+1 : (x)/2)

ui len(ui n) {
    if (LINKS[n]) return LEN[n];
    LINKS[n] = next(n);
    return (LEN[n] = len(LINKS[n])+1);
}

int main(){
    LINKS[1] = 4;
    LEN[1] = 0;
    ui i, maxLen=0, maxI=0, l;
    for (i = 1; i < SIZE; i++){
        if (i % 50 == 0) cout << '\r' << i << '/' << SIZE;
        l = len(i);
        //cout << i << "," << l << endl;
        if (l > maxLen){
            maxLen = l;
            maxI = i;
        }
    }
    cout << "\nMax i: " << maxI << "\nMax len: " << maxLen << endl;
    
    return 0;
}
