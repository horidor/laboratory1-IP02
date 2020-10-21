

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main()
{
    float x1, x2, y1, y2, l;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;
    l = sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
    printf("c= %1.3f\n ", l);

    return 0;


}

