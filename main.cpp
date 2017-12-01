//Oisin Dake
//Lab 9
//Sphere Calculations
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//function declaration
void sphereCalculator(double rad, double *v, double *sa)
{
    *sa = 4 * M_PI * (rad * rad);// equations
    *v = (4.0/3.0) *(M_PI*(rad*rad*rad));

    return;
}


int main(void)// main program
{
    // variable declarations
    double r, vol, sarea;// store values
    double *ptr_vol, *ptr_sarea;

    // initialize pointers
    ptr_vol = &vol;
    ptr_sarea = &sarea;

    cout << "Sphere calculations surface area and volume of a sphere\n" << endl;

    do//do while loop to get input < than 0
    {
        cout << "Enter the radius of the sphere (m): ";
        cin >> r;
    }
    while (r <= 0);

    sphereCalculator(r, ptr_vol, ptr_sarea);
    cout << fixed;
    cout.precision(2);
    cout << "\nVolume = " << vol << " m^3" << endl;// to display
    cout << "Surface area = " << sarea << " m^2" << endl;// to display

    return 0;//program end
}
