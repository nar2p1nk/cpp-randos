#include <iostream>

using namespace std;

int main(){

    int enum1,enum2,enum3;

    int num = 1, num2 = 2, num3 = 3;

    enum1 = enum2 = enum3 = num3;

    int eTotal = enum1 + enum2 + enum3;

    int total = num + num2 + num3;

    cout << "total:" << total << endl;
    cout << "empty total:" << eTotal << endl;

//    string varia = "floyd";
//    cout << varia << endl;
//    cout << "Hatred!" << endl;
    return 0;
}
