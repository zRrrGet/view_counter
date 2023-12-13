#include <stdexcept>
#include <iostream>

class ClassToTest {
private:
    int _x;
    int _y;

public:
    ClassToTest(int x, int y) : _x(x), _y(y) {}

    void setPair(int x, int y) {
        _x = x;
        _y = y;
    }

    int divide() {
        if (_y == 0) {
            throw std::invalid_argument("zero noooo!!!");
        }
        return _x / _y;
    }
};

int main() {
    ClassToTest calc(10, 2);
    std::cout << calc.divide() << std::endl;
    return 0;
}