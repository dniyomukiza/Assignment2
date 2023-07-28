#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalid_argument(" argument parsed is not a letter.");
    }

    char originalCase = start;

    start = toupper(start);

    if (offset < -26 || offset > 26) {
        throw invalid_argument(" Offset is out of valid range.");
    }

    char result = start + offset;

    // Handle wrapping around for positive offsets
    if (offset >= 0) {
        if (result > 'Z') {
            result = 'A' + (result - 'Z') - 1;
        }
    } else { // Handle wrapping around for negative offsets
        if (result < 'A') {
            result = 'Z' - ('A' - result) + 1;
        }
    }

    if (!isalpha(result) || result < 'A' || result > 'Z') {
        throw invalid_argument(" argument is not a letter.");
    }

    // Adjust the result case based on the original start case
    if (islower(originalCase)) {
        result = tolower(result);
    }

    return result;
}

int main() {


        cout  << character('a', 1) << endl;


    return 0;
}
