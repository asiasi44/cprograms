#include <iostream>
using namespace std;
int x = 10;
int main(void) {

    int x = 20;
    cout<<x<<endl;
    {
        int x = 30;
        cout<<x<<endl;
    }
    cout<<x;
    return 0;
}