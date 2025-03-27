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
/*
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
*/
/*
#include <iostream>

using namespace std;

int main()
{
    int nbAnimaux(2);

    switch (nbAnimaux)
    {
        case 0:
            cout << "Vous n'avez pas d'animaux de compagnie" << endl;
            break;

        case 1:
            cout << "C'est super d'avoir un fidele compagnon !" << endl;
            break;

        case 2:
            cout << "Ca doit en faire du monde a la maison !" << endl;
            break;

        default:
            cout << "Votre budget croquettes doit etre important" << endl;
            break;
    }

    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    bool adulte(true);
    int nbEnfants = 1
    
    // if (adulte == true)
    // if (adulte and nbEnfants >= 1)
    // if (nbEnfants == 1 or nbEnfants > 1)
    if (not adulte)
    {
        cout << "Vous n'etes pas un adulte !" << endl;
    }

    return 0;
}