#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int * a = new int;
    *a = 12;
    cout << to_string(*a);
}