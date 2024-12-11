#include <iostream>
using namespace std;
#include <test.h>
#include <ctor.h>

string str = "hello wrold!";

int main(){
    print();
    Ctor myctor1;
    Ctor myctor2(2);
    Ctor myctor3 = move(myctor2);
    Ctor myctor4 = myctor2;
    myctor4 = myctor2;
    return 0;
}