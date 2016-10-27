#include<iostream>
#include<string>



struct Et {
    int numero;
    bool initiale;
    std::string receptivite[10];
    int index_receptivite;
    std::string etapes_validant[10];
    int index_etapes_validant;
    std::string etapes_activees_par[10];
    int index_etapes_activees_par;
    std::string etapes_amont[10];
    int index_etapes_amont;
};

int main (void)
{

    Et etape0;

    //Et etape0;
    etape0.numero = 0;
    etape0.initiale = true;
    etape0.receptivite[0] = "dcy.marche";
    etape0.etapes_validant[0] = "1";
    etape0.etapes_activees_par[0] = "3";
    etape0.etapes_activees_par[1] = "4";
    etape0.etapes_activees_par[2] = "5";
    etape0.etapes_amont[0] = "";
    etape0.index_receptivite = 1;
    etape0.index_etapes_validant = 1;
    etape0.index_etapes_activees_par = 3;
    etape0.index_etapes_amont = 1;


    Et etape1;
    etape1.numero = 1;
    etape1.initiale = false;
    etape1.receptivite[0] = "cap1";
    etape1.etapes_validant[0] = "2";
    etape1.etapes_activees_par[0] = "0";
    etape1.etapes_amont[0] = "0";
    etape1.index_receptivite = 1;
    etape1.index_etapes_validant = 1;
    etape1.index_etapes_activees_par = 1;
    etape1.index_etapes_amont = 1;

    Et etape2;
    etape2.numero = 2;
    etape2.initiale = false;
    etape2.receptivite[0] = "cap2";
    etape2.etapes_validant[0] = "3";
    etape2.etapes_activees_par[0] = "1";
    etape2.etapes_amont[0] = "1";
    etape2.index_receptivite = 1;
    etape2.index_etapes_validant = 1;
    etape2.index_etapes_activees_par = 1;
    etape2.index_etapes_amont = 1;

    Et etape3;
    etape3.numero = 3;
    etape3.initiale = false;
    etape3.receptivite[0] = "cap3";
    etape3.receptivite[1] = "/marche";
    etape3.etapes_validant[0] = "4";
    etape3.etapes_validant[1] = "0";
    etape3.etapes_activees_par[0] = "2";
    etape3.etapes_amont[0] = "2";
    etape3.index_receptivite = 2;
    etape3.index_etapes_validant = 2;
    etape3.index_etapes_activees_par = 1;
    etape3.index_etapes_amont = 1;

    Et etape4;
    etape4.numero = 4;
    etape4.initiale = false;
    etape4.receptivite[0] = "cap4";
    etape4.receptivite[1] = "/marche";
    etape4.etapes_validant[0] = "5";
    etape4.etapes_validant[1] = "0";
    etape4.etapes_activees_par[0] = "3";
    etape4.etapes_amont[0] = "3";
    etape4.index_receptivite = 2;
    etape4.index_etapes_validant = 2;
    etape4.index_etapes_activees_par = 1;
    etape4.index_etapes_amont = 1;

    Et etape5;
    etape5.numero = 5;
    etape5.initiale = false;
    etape5.receptivite[0] = "cap5+/marche";
    etape5.etapes_validant[0] = "0";
    etape5.etapes_activees_par[0] = "4";
    etape5.etapes_amont[0] = "4";
    etape5.index_receptivite = 1;
    etape5.index_etapes_validant = 1;
    etape5.index_etapes_activees_par = 1;
    etape5.index_etapes_amont = 1;
    
    int index_etapes = 6;
    Et tab[index_etapes] = {etape0, etape1, etape2, etape3, etape4, etape5};

    
    std::cout << "\n\n\n";

    for (int i = 0; i < index_etapes; i++) {

        for (int j = 0; j < tab[i].index_etapes_activees_par; j++) {
            if (i != 0) {j++;
            } 
            else std::cout << "  " << tab[i].etapes_activees_par[j] << ">>      ";
        }

        std::cout << "\n";

        for (int j = 0; j < tab[i].index_etapes_activees_par; j++) {
            //std::cout << "    |       ";
        }

        if (tab[i].index_etapes_activees_par > 1) {
            for (int j = 0; j < tab[i].index_etapes_activees_par; j++) {
                std::cout << "_______";
            }
            std::cout << "\n";
        }

        if (tab[i].initiale != true) {
            std::cout << " [" << tab[i].numero << "]\n";
        }
        else {
            std::cout << "  |\n[[" << tab[i].numero << "]]\n";
        }

        
        
        
        if (tab[i].index_receptivite > 1) {

            for (int j = 0; j < tab[i].index_receptivite; j++) {
                std::cout << "_______";
            }

            std::cout << "\n";

            for (int j = 0; j < tab[i].index_receptivite; j++) {
                std::cout << "  |       ";
            }
            std::cout << "\n";

            for (int j = 0; j < tab[i].index_receptivite; j++) {
                std::cout << "  - " << tab[i].receptivite[j] << "  ";
            }

            for (int j = 1; j < tab[i].index_receptivite; j++) {
                std::cout << "\n  |         >> " << tab[i].etapes_validant[j];
            }

        }
        else {
            std::cout << "  |\n  - " << tab[i].receptivite[0] << "\n  |";
        }

        if (tab[i].numero == index_etapes - 1) {
            std::cout << "\n  >> " << tab[i].etapes_validant[0];
        }
    }


    std::cout << "\n\n\n";  
}



