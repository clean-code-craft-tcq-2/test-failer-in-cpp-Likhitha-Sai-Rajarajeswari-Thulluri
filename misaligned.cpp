#include <iostream>
#include <assert.h>
#include<string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

std::string formatString(int i, int j)
{
    std::string st = (i*5+j).to_string()+ " | "+ majorColor[i] + " | " + minorColor[j];
    return st;
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
            std::cout<<formatString(i,j);
        }
    }
    return i * j;
}

void testPrintColorMap()
{
    assert(formatString(0,0).compare("0 ! White | Blue"));
    assert(formatString(2,3).compare("13 ! Black ! Brown"));
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    testPrintColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
