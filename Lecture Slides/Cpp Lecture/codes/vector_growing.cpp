#include <vector>

int main() {
    std::vector<double> v;
    // start empty; that is, v has no elements

    v.push_back(2.7);
    // add an element with the value 2.7
    // at the end ("the back") of vector v
    // v now has one element is v[0] ==2.7

    v.push_back(4.7);
    // v now has two element and  v[1] ==4.7

    v.push_back(6.7);
    // v now has three element is v[2] ==6.8
}