# Pseudo code de votre programme

1. Initialisation des constantes (`dy, dx, s1, s2, L1`)
2. Calcul de la distance `distance_dirt_y` sur la terre `y = dy - L1`
3. Calcul de la longueur `L2` (Pythagore -> `L2 = sqrt(dx^2 + distance_dirt_y^2`))
4. Calcul du temps sur la route (`t1 = L1 / s1`)
5. Calcul du temps sur la terre (`t2 = L2 / s2`)
6. Addition du temps total (`t = t1 + t2`)
7. Affichage du temps total nécessaire au robot