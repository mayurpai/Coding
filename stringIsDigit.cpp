#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string inputStr;
    getline(cin, inputStr);
    for (int i=0; i<strlen(inputStr.c_str()); i++) {
        if (inputStr[i] >= '0' && inputStr[i] <= '9') {
            cout << i;
        }
    }

    return 0;
}
