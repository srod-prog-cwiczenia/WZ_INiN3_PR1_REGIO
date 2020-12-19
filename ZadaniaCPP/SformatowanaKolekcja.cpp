#include "SformatowanaKolekcja.h"

string SformatowanaKolekcja::formatowanie(const string& txt)
{
    string odp = txt;
    for (char &ch : odp) {
        ch = toupper(ch);
    }
    return odp;
}
