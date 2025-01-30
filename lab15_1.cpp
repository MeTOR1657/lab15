#include <iostream>
using namespace std;

int main() {
    
    int a = 5;
    char b = 'A';

    
    char *c = &b;

    
    int *x = &a;

   
    char *y = &b;

   
    char **z = &c;

   
    cout << a << " " << b << " " << *c << " " << x << " " << y << " " << z << endl;
    cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << endl;

   
    *x = 6;

    cout << a << " " << b << " " << *c << " " << x << " " << y << " " << z << endl;

 
    *y = 'F';


    cout << a << " " << b << " " << *c << " " << x << " " << y << " " << z << endl;

 
    *z = &b;

    cout << a << " " << b << " " << *c << " " << x << " " << y << " " << z << endl;

    return 0;
}
