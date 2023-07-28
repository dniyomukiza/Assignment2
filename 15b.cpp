#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T value) {
    return value / 2.0;
}

int half(int value) {
    return static_cast<int>(round(value / 2.0));
}

int main() {

    double d = 7.0;
    int i = 3;
    float f = 5.0f;
    cout << half(d) << endl;
    cout << half(f) << endl;
    cout << half(i) << endl;

    return 0;
}
