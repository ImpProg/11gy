#include <stdio.h>

int main() {
    int x = 3;
    const int y = 5;
    
    int* p = &y;
    //*p = 4; // definiálatlan viselkedés, const kulcsszó y-nál figyelmen kívül lesz hagyva

    const int* cip = &x;
    //*cip = 56; //hiba, cip egy konstansra mutató pointer

    int* const icp = &x;
    *icp = 34;
    //icp = &y; //hiba, icp konstans pointer

    const int* const cicp = &y; //konstansra mutató konstans pointer

    return 0;
}