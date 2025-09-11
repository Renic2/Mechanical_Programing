#include <iostream>
#define Max(a,b,c) ((a > b)? ((a > c)? a : c) : ((b < c)? b : c))

using namespace std;

int main() {
    int a, b, c;
    cout << "Type 3 Num: ";
    cin >> a >> b >> c;
    
    // int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); 
    cout << "Max is " << Max(a, b, c) << endl;
    return 0;
}