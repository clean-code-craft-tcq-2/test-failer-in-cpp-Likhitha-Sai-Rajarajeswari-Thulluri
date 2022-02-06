#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms >= 38 && cms <= 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testSize(int cms, char ch)
{
    assert(size(cms) == ch);
}

int main() {
    testSize(37, 'S');
    testSize(38, 'M');
    testSize(40, 'M');
    testSize(42, 'M');
    testSize(43, 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
