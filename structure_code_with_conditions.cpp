/*
#include <iostream>

using namespace std;

int main()
{
    int nbAnimaux(2);

    if (nbAnimaux > 0)
    {
        cout << "Super ! Les animaux de compagnie ca change la vie !" << endl;
    }
    else
    {
        cout << "Vous n'avez pas d'animaux de compagnie" << endl;
    }

    cout << "Fin du programme" << endl;

    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int nbAnimaux(2);

    if (nbAnimaux == 0)
    {
        cout << "Vous n'avez pas d'animaux de compagnie" << endl;
    }
    else if (nbAnimaux == 1)
    {
        cout << "C'est super d'avoir un fidele compagnon !" << endl;
    }
    else if (nbAnimaux == 2)
    {
        cout << "Ca doit en faire du monde a la maison !" << endl;
    }
    else
    {
        cout << "Votre budget croquettes doit etre important" << endl;
    }

    cout << "Fin du programme" << endl;
    return 0;
}