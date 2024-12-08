#include <iostream>
#include <cmath>
#include "TriangleBySides.h"
#include "TriangleByVertices.h"
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TriangleBySides t1(3, 4, 5);
    t1.display();
    cout << "Медіана до сторони 1: " << t1.calcMedian(1) << endl;
    cout << "Радіус вписаного кола: " << t1.calcInscribedRadius() << endl;
    cout << "Радіус описаного кола: " << t1.calcCircumscribedRadius() << endl;

    cout << endl;

    TriangleByVertices t2(0, 0, 3, 0, 0, 4);
    t2.display();
    cout << "Медіана до сторони 2: " << t2.calcMedian(2) << endl;
    cout << "Радіус вписаного кола: " << t2.calcInscribedRadius() << endl;
    cout << "Радіус описаного кола: " << t2.calcCircumscribedRadius() << endl;
}