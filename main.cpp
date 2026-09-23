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
#include <string>

using namespace std;

int main() {
    // Initialisation of the constants
    const double dx = 3.;
    const double dy = 10.;
    const double s1 = 5.;
    const double s2 = 2.;


    // User Entry to get L1
    double L1;
    cout << "Entrez la distance a parcourir sur la route : ";

    // User Entry and validation to be certain that it is possible.
    // https://stackoverflow.com/questions/3273993/how-do-i-validate-user-input-as-a-double-in-c
    while (!(cin >> L1) || (L1 < 0 || L1 > dy)) {
        cout << "Veuillez entrer un nombre entre 0 et " << dy << " : ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "Distance sur la route : " << L1 << endl;

    // Distance in the dirt
    const double distance_dirt_y = dy - L1;
    const double L2 = sqrt(dx * dx + distance_dirt_y * distance_dirt_y);

    // Time needed for the robot to reach the object
    const double t1 = L1 / s1;
    const double t2 = L2 / s2;

    const double totalTime = t1 + t2;

    cout << "Temps total pris par le robot : " << totalTime << " secondes" << endl;

    return EXIT_SUCCESS;
}