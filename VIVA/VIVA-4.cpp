
#include <iostream>
using namespace std;

class color {
public:
    virtual void draw() {
        std::cout << "color is choose" << std::endl;
    }
};

class red : public color {
public:
    void draw() {
        std::cout << "red color" << std::endl;
    }
};

class black : public color {
public:
    void draw() {
        std::cout << "black color" << std::endl;
    }
};

int main() {
    color *c1 = new color();
    color *c2 = new red();
    color *c3 = new black();

    c1->draw();
    c2->draw();
    c3->draw();

    return 0;
}

