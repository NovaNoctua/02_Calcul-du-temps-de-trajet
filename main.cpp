/* --------------------------- 
Laboratoire : 02
Auteur(s) : Maël Naudet
Date : 23 septembre 2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Initialisation of the constants
    const double dx = 3.;
    const double dy = 3.;
    const double s1 = 5.;
    const double s2 = 2.;
    const double L1 = 6.;

    // Distance in the dirt
    const double distance_dirt_y = dy - L1;
    const double L2 = sqrt(dx * dx + distance_dirt_y * distance_dirt_y);

    // Time needed for the robot to reach the object
    const double t1 = L1 / s1;
    const double t2 = L2 / s2;

    const double totalTime = t1 + t2;

    cout << "Temps total pris par le robot : " << totalTime << " secondes" << endl;
}