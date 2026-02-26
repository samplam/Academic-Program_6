#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaration and assignment of constants and variables.
    const float temps_perdu_par_employe = (5.0f/60.0f) ;
    const float salaire_horaire = 17 ;
    const float nb_employes = 50 ;
    const string ligne_tirets = "-----------------------------------------------------------------" ;
    float temps_perdu_jour = 0 ;
    float argent_perdu_jour = 0 ;
    string factice = "" ;

    // Message to the user.
    cout << "---- Une entreprise de Montréal Inc. ----" << endl ;
    cout << "Ce programme affiche les pertes en temps et les pertes monétaires occasionnées par les employés fumeurs." << endl ;
    cout << "En moyenne, les employés perdent 5 minutes par jour pour fumer." << endl ;
    cout << "En moyenne, les employés sont remunérés 17 $ par heure." << endl ;
    cout << "Le tableau suivant résume ces pertes par jour, par semaine, par mois et par an du total des 50 fumeurs." << endl ;
    cout << "Appuyez sur la touche 'entrée' lorsque vous vous sentez prêts à congédier des employés :" << endl ;
    getline(cin, factice) ;

    // Calculation of losses.
    temps_perdu_jour = (temps_perdu_par_employe * nb_employes) ;
    argent_perdu_jour = (temps_perdu_jour * salaire_horaire) ;

    // Display of the table.
    cout << ligne_tirets << endl ;
    cout << "|Tableau des pertes provenant des 50 fumeurs                    |" << endl ;
    cout << ligne_tirets << endl ;
    cout << "|                 |Par jour" << " |Par semaine" << " |Par mois" << "  |Par an" << "     |" << endl ;
    cout << ligne_tirets << endl ;
    cout << "|Pertes en temps  |" << setprecision(2) << fixed << temps_perdu_jour << " h   |" << temps_perdu_jour * 5 << " h     |" << temps_perdu_jour * 5 * (52.0f / 12.0f) << " h   |" << temps_perdu_jour * 5 * 52 << " h  |" << endl ;
    cout << ligne_tirets << endl ;
    cout << "|Pertes en argent |" << setprecision(2) << fixed << argent_perdu_jour << " $  |" << argent_perdu_jour * 5 << " $    |" << argent_perdu_jour * 5 * (52.0f / 12.0f) << " $ |" << argent_perdu_jour * 5 * 52 << " $ |" << endl ;
    cout << ligne_tirets << endl ;

    return 0 ;
}