// Author: Fransiskus Agapa
// Purpose: Practice Cstring - strlen - strcmp - strcpy
// 10/12/22
// Have Fun :)

#include <iostream>
#include "cstring"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string choice;
    cout << "== Practice Cstring ==" << endl;

    char txt1[6] = "Rommo";
    char txt2[6] = "Jully";

    // check length
    if(strlen(txt1) == strlen(txt2))                                                            // check length
    {
        cout << "Your input have the same length " << strlen(txt1) << " characters" << endl;
    }

    // compare two item
    if(strcmp(txt1, txt2) == 0)                                                                // compare
    {
        cout << "Your both input are the same" << endl;
    }

    cout << endl << "Before copy [ " << txt1 << " ] to [ " << txt2 << " ]" <<  endl;
    strcpy(txt1,txt2);                                                                          // copy
    cout << endl << "After copy [ " << txt1 << "] [ " << txt2 << " ]" << endl;

    return 0;
}
