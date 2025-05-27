#include <iostream>

using std::cout;
using std::endl;


int main() 
{
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    // int modifiers suffixes:
    auto var6 {123u}; // usigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    cout << "var1 ocupa :" << sizeof(var1) << " bytes " << endl;
    cout << "var2 ocupa :" << sizeof(var2) << " byte " << endl;
    cout << "var3 ocupa :" << sizeof(var3) << " bytes " << endl;
    cout << "var4 ocupa :" << sizeof(var4) << " bytes " << endl;
    cout << "var5 ocupa :" << sizeof(var5) << "bytes " << endl;
    cout << "var6 ocupa :" << sizeof(var6) << " byte " << endl;
    cout << "var7 ocupa :" << sizeof(var7) << " bytes " << endl;
    cout << "var8 ocupa :" << sizeof(var8) << " bytes " << endl;

    bool state{false}; // declarte and initialize
    state = true;

    


    return 0;
} 