#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
};


int main (int argc, char **argv) {
    Person *p1, *p2, *p3;
    p1 = new Person();

    p1->name = "Alice";
    p1->age = 20;
    p2 = p1;
    p3 = p1;

    p2->age = 21;

    p3->name = "Bob";

    cout << p1->name << '\n';
    cout << p1->age << "\n\n";

    cout << p2->name << '\n';
    cout << p2->age << "\n\n";

    cout << p3->name << '\n';
    cout << p3->age << "\n\n";

    return EXIT_SUCCESS;
}
