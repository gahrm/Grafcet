//---------------------------------------------------------------------------
#include <vcl.h>
#include <windows.h>
#include <string>

#pragma hdrstop

#include "projet_dessin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
void EtapeOrigine(int, int, int);
TfnPrincipale *fnPrincipale;

//---------------------------------------------------------------------------
__fastcall TfnPrincipale::TfnPrincipale(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
struct Et{
	int numero;
	bool initiale;
	std::vector <String> receptivite;
	std::vector <String> etapes_validant;
	std::vector <String> etapes_activees_par;
	std::vector <String> etapes_amont;
};

int iNumEtape = 0;
int POSX = 400;
int iPosX = 400, iPosY = 20, def = 30;

std::vector <Et> tbEtapes;
std::vector <UnicodeString> NumLabel;

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::btEtapeInitClick(TObject *Sender)
{
	fnPrincipale->Image1->Canvas->Rectangle(iPosX, iPosY, iPosX + def, iPosY + def);
	fnPrincipale->Image1->Canvas->Rectangle(iPosX + 5, iPosY + 5, iPosX + def - 5, iPosY + def - 5);
	fnPrincipale->Image1->Canvas->Font->Size = 12;

	Etape = new TLabel(this);
	Etape->Parent = fnPrincipale;
	Etape->Caption = iNumEtape;
	Etape->Alignment = taCenter;
	Etape->AutoSize = false;
	Etape ->Font->Size = 12;
	Etape->Height = def/2 + 4;
	Etape->Width= def/2 + 4;
	Etape->Left = iPosX + def/5 + 1;
	Etape->Top = iPosY + def/5 + 1;
	Liste_etapes->Add(Etape);

	iNumEtape += 1;
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::btEtapeInitClick(UnicodeString usCaption)
{
//	fnPrincipale->Image1->Canvas->Rectangle(iPosX, iPosY, iPosX + def, iPosY + def);
//	fnPrincipale->Image1->Canvas->Rectangle(iPosX + 5, iPosY + 5, iPosX + def - 5, iPosY + def - 5);
//	fnPrincipale->Image1->Canvas->Font->Size = 12;

	Etape = new TLabel(this);
	Etape->Parent = fnPrincipale;
	Etape->Caption = usCaption;
	Etape->Alignment = taCenter;
	Etape->AutoSize = false;
	Etape ->Font->Size = 12;
	Etape->Height = def/2 + 4;
	Etape->Width= def/2 + 4;
	Etape->Left = iPosX + def/4;
	Etape->Top = iPosY + def/4 + 1;
	Liste_etapes->Add(Etape);

	iNumEtape += 1;
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::btEtapeClick(TObject *Sender)
{
//	fnPrincipale ->Image1->Canvas->Rectangle(iPosX, iPosY, iPosX + def, iPosY + def);
//	fnPrincipale ->Image1->Canvas->Font->Size = 12;

	Etape = new TLabel(this);
	Etape->Parent = fnPrincipale;
	Etape->Caption = iNumEtape;
	Etape->Alignment = taCenter;
	Etape->AutoSize = false;
	Etape ->Font->Size = 12;
	Etape->Height = def/2 + 4;
	Etape->Width= def/2 + 4;
	Etape->Left = iPosX + def/4 + 1;
	Etape->Top = iPosY + def/4 + 1;
	Liste_etapes->Add(Etape);

	iNumEtape += 1;
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::FormCreate(TObject *Sender)
{
	Liste_etapes = new TList;
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::FormDestroy(TObject *Sender)
{
    delete Etape;
 	delete Liste_etapes;
	Liste_etapes=NULL;
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::dtDivEtClick(TObject *Sender)
{
	fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + (def/2), iPosX + def*3, 1 + iPosY + (def/2));
	fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2, (3 + iPosY) + (def/2), iPosX + def*3, (4 + iPosY) + (def/2));
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::btConvETClick(TObject *Sender)
{
	fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + (def/2), iPosX - def*2, 1 + iPosY + (def/2));
	fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2, (3 + iPosY) + (def/2), iPosX - def*2, (4 + iPosY) + (def/2));
}

//---------------------------------------------------------------------------
void __fastcall TfnPrincipale::btEditClick(TObject *Sender)
{
	std::vector <std::vector <Et> > GrpEtapes;

	std::vector <Et> Groupe0;
	std::vector <Et> Groupe1;
	std::vector <Et> Groupe2;
	std::vector <Et> Groupe3;
	std::vector <Et> Groupe4;
	std::vector <Et> Groupe5;
	std::vector <Et> Groupe6;
	std::vector <Et> Groupe7;
	std::vector <Et> Groupe8;
	std::vector <Et> Groupe9;
	std::vector <Et> Groupe10;
	std::vector <Et> Groupe11;

	GrpEtapes.push_back(Groupe0);
	GrpEtapes.push_back(Groupe1);
	GrpEtapes.push_back(Groupe2);
	GrpEtapes.push_back(Groupe3);
	GrpEtapes.push_back(Groupe4);
	GrpEtapes.push_back(Groupe5);
	GrpEtapes.push_back(Groupe6);
	GrpEtapes.push_back(Groupe7);
	GrpEtapes.push_back(Groupe8);
	GrpEtapes.push_back(Groupe9);
	GrpEtapes.push_back(Groupe10);
	GrpEtapes.push_back(Groupe11);

	Et etape0;
	etape0.numero = 0;
	etape0.initiale = true;
	etape0.receptivite.push_back("cap3");
	etape0.etapes_validant.push_back("1");
	etape0.etapes_activees_par.push_back("");

	Et etape1;
	etape1.numero = 1;
	etape1.initiale = false;
	etape1.receptivite.push_back("/marche");
	etape1.etapes_validant.push_back("2");
	etape1.etapes_validant.push_back("7");
	etape1.etapes_activees_par.push_back("0");


	Et etape2;
	etape2.numero = 2;
	etape2.initiale = false;
	etape2.receptivite.push_back("/marche");
	etape2.etapes_validant.push_back("3");
	etape2.etapes_validant.push_back("5");
	etape2.etapes_activees_par.push_back("1");
	etape2.receptivite.push_back("/marche");
	etape2.receptivite.push_back("/marche");


	Et etape3;
	etape3.numero = 3;
	etape3.initiale = false;
	etape3.receptivite.push_back("cap3");
	etape3.etapes_validant.push_back("4");
	etape3.etapes_activees_par.push_back("2");


	Et etape4;
	etape4.numero = 4;
	etape4.initiale = false;
	etape4.receptivite.push_back("cap3");
	etape4.receptivite.push_back("cap3");
	etape4.etapes_validant.push_back("");
	etape4.etapes_activees_par.push_back("3");
	etape4.etapes_activees_par.push_back("6");


	Et etape5;
	etape5.numero = 5;
	etape5.initiale = false;
	etape5.receptivite.push_back("cap5+/marche");
	etape5.etapes_validant.push_back("6");
	etape5.etapes_activees_par.push_back("2");

	Et etape6;
	etape6.numero = 6;
	etape6.initiale = false;
	etape6.receptivite.push_back("cap3");
	etape6.etapes_validant.push_back("6");
	etape6.etapes_activees_par.push_back("5");

	Et etape7;
	etape7.numero = 7;
	etape7.initiale = false;
	etape7.receptivite.push_back("cap3");
	etape7.etapes_validant.push_back("8");
	etape7.etapes_activees_par.push_back("1");

	Et etape8;
	etape8.numero = 8;
	etape8.initiale = false;
	etape8.receptivite.push_back("cap3");
	etape8.etapes_validant.push_back("9");
	etape8.etapes_activees_par.push_back("7");

	Et etape9;
	etape9.numero = 9;
	etape9.initiale = false;
	etape9.receptivite.push_back("cap3");
	etape9.etapes_validant.push_back("10");
	etape9.etapes_activees_par.push_back("8");

	Et etape10;
	etape10.numero = 10;
	etape10.initiale = false;
	etape10.receptivite.push_back("cap3");
	etape10.etapes_validant.push_back("11");
	etape10.etapes_activees_par.push_back("9");

	Et etape11;
	etape11.numero = 11;
	etape11.initiale = false;
	etape11.receptivite.push_back("cap3");
	etape11.etapes_validant.push_back("0");
	etape11.etapes_activees_par.push_back("4");
	etape11.etapes_activees_par.push_back("10");

	//const int iNb_Etapes = 12;
	tbEtapes.push_back(etape0);
	tbEtapes.push_back(etape1);
	tbEtapes.push_back(etape2);
	tbEtapes.push_back(etape3);
	tbEtapes.push_back(etape4);
	tbEtapes.push_back(etape5);
	tbEtapes.push_back(etape6);
	tbEtapes.push_back(etape7);
	tbEtapes.push_back(etape8);
	tbEtapes.push_back(etape9);
	tbEtapes.push_back(etape10);
	tbEtapes.push_back(etape11);


	int Index_Groupe = 0;
	GrpEtapes[Index_Groupe].push_back(tbEtapes[0]);
	Index_Groupe++;

	for( int unsigned i = 1 ; i < tbEtapes.size() ; i++ ) {

		if 	(  (tbEtapes[i-1].etapes_validant.size() > 1)
				|| (tbEtapes[i].etapes_activees_par.size() > 1)
			) {
			GrpEtapes[Index_Groupe].push_back(tbEtapes[i]);
			Index_Groupe++;
		}
		else {
			GrpEtapes[Index_Groupe].push_back(tbEtapes[i]);
		}
	}

//	for (int unsigned i = 0; i < tbEtapes.size(); i++) {
//
//			for (int unsigned j = 0; j < tbEtapes[i].etapes_activees_par.size(); j++) {
//				GrpEtapes[Index_Groupe].push_back(tbEtapes[tbEtapes[i].etapes_activees_par[j].ToInt()]);
//
//				for (int unsigned k = tbEtapes[i].etapes_activees_par[j].ToInt(); k < tbEtapes.size(); k++) {
//
//					if (tbEtapes[k].etapes_validant.size() != 1) {
//						break;
//					}
//					else {
//						GrpEtapes[Index_Groupe].push_back(tbEtapes[k]);
//					}
//
//				}
//
//			}
//			Index_Groupe ++;
//
//		}
//		else {
//			GrpEtapes[Index_Groupe].push_back(tbEtapes[i]);
//		}
	//}

	for (int l = 0; l < Index_Groupe; l++) {

		for (int unsigned i = 0; i < GrpEtapes[l].size(); i++) {

			/**********************************************************************/
			/*Renvoies de l'étape d'origine****************************************/
			/**********************************************************************/

			if (GrpEtapes[l][i].initiale == true) {
				for (unsigned int j = 0; j < GrpEtapes[l][i].etapes_activees_par.size(); j++) {
					fnPrincipale->Image1->Canvas->Ellipse(iPosX, iPosY, iPosX + def, iPosY + def);
					fnPrincipale->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + def, 1 + iPosX + def/2, iPosY + def * 1.5);
					iPosX -= def * 2;
				}

			iPosX = POSX;
			fnPrincipale->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + def*1.5, 1 + iPosX + def/2, iPosY + def * 2);
			iPosY += def;

			for (unsigned int j = 0; j < GrpEtapes[l][i].etapes_activees_par.size() - 1; j++) {
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX - def*1.5, iPosY + def/2 - 1, iPosX + def/2, iPosY + def/2);
				iPosX -= def * 2;
			}

			iPosX = POSX;
			iPosY += def;
			}
    						
			/**********************************************************************/
           /*Ecriture de l'étape**************************************************/
    		/**********************************************************************/

		   //Etape initiale ou non
			if (GrpEtapes[l][i].initiale == true) {
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX, iPosY, iPosX + def, iPosY + def);
			   fnPrincipale ->Image1->Canvas->Rectangle(iPosX + 4, iPosY + 4, iPosX + def - 4, iPosY + def - 4);
			   btEtapeInitClick(this);
		   }
		   else {
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX, iPosY, iPosX + def, iPosY + def);
				btEtapeClick(this);
		   }

		   /**********************************************************************/
			/*Convergence depuis une étape future**********************************/
			/**********************************************************************/

			if ((GrpEtapes[l][i + 1].etapes_activees_par.size() > 1) && (!GrpEtapes[l][i + 1].initiale))  {

			   iPosY += def;
			   fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2 - 1, iPosY, iPosX + def/2, iPosY + def);
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/4, iPosY + def/2 - 1, iPosX +  def * 0.75, iPosY + def/2);
				iPosX -= def * 2;

				for (unsigned int j = 1; j < GrpEtapes[l][i].etapes_activees_par.size(); j++) {
				   fnPrincipale->Image1->Canvas->Ellipse(iPosX, iPosY - def/2, iPosX + def, iPosY + def/2);
				   fnPrincipale->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + def/2, 1 + iPosX + def/2, iPosY + def*0.75);
				   iPosX -= def * 2;
				}

				iPosX = POSX;

				for (unsigned int j = 1; j < GrpEtapes[l][i].etapes_activees_par.size(); j++) {
				   fnPrincipale ->Image1->Canvas->Rectangle(iPosX - def*1.5, iPosY + def*0.75 - 1, iPosX + def/2, iPosY + def*0.75);
					iPosX -= def * 2;
				}

		   }
			else {
				iPosY += def;
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2 - 1, iPosY, iPosX + def/2, iPosY + def);
				fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/4, iPosY + def/2 - 1, iPosX +  def * 0.75, iPosY + def/2);
			}

			iPosX = POSX;

			/**********************************************************************/
			/*Renvoie vers une étape précédente************************************/
			/**********************************************************************/

			if ( (GrpEtapes[l][i].etapes_validant.size() > 1) && (GrpEtapes[l][i].etapes_validant[1] < GrpEtapes[l][i].numero) ) {

				for (unsigned int j = 1; j < GrpEtapes[l][i].etapes_validant.size(); j++) {
					fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2, iPosY + def/4 - 1, iPosX + def*2.5, iPosY + def/4);
					iPosX += def * 2;
					fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/2 - 1, iPosY + 0.25*def, iPosX + def/2, iPosY + def*0.75);
					fnPrincipale ->Image1->Canvas->Rectangle(iPosX + def/4, iPosY + def/2 - 1, iPosX + def/1.33, iPosY + def/2);
					fnPrincipale->Image1->Canvas->Ellipse(iPosX, iPosY + def*0.75, iPosX + def, iPosY + def*1.75);
				}
			}

			iPosX = POSX;
			iPosY += def;
		}
		POSX += 80;

	//fnPrincipale->Image1->Canvas->Ellipse(iPosX, iPosY, iPosX + def, iPosY + def);
	}
}
//---------------------------------------------------------------------------

void __fastcall TfnPrincipale::btRenvoiClick(TObject *Sender)
{
		fnPrincipale ->Image1->Canvas-> Ellipse(iPosX + 3, iPosY + 4, iPosX + 38, iPosY + 39);
		fnPrincipale ->Image1->Canvas-> Rectangle(iPosX + 20, iPosY + 38, iPosX + 21, iPosY + 70);

		Etape = new TLabel(this);
		Etape->Parent = fnPrincipale;
		//Etape->Caption = ;
		Etape->Alignment = taCenter;
		Etape->AutoSize = false;
		Etape ->Font->Size = 12;
		Etape->Height = def/2 + 4;
		Etape->Width= def/2 + 4;
		Etape->Left = iPosX + def/6;
		Etape->Top = iPosY + def/6;
}
//---------------------------------------------------------------------------

void __fastcall TfnPrincipale::btRenvoiClick(UnicodeString usCaption)
{
        fnPrincipale ->Image1->Canvas-> Ellipse(iPosX + 3, iPosY + 4, iPosX + 38, iPosY + 39);
                fnPrincipale ->Image1->Canvas-> Rectangle(iPosX + 20, iPosY + 38, iPosX + 21, iPosY + 60);

		Etape = new TLabel(this);
		Etape->Parent = fnPrincipale;
		Etape->Caption = usCaption;
		Etape->Alignment = taCenter;
		Etape->AutoSize = false;
		Etape ->Font->Size = 12;
		Etape->Height = def/2 + 4;
		Etape->Width= def/2 + 4;
		Etape->Left = iPosX + def/5 + 1;
				Etape->Top = iPosY + def/5 + 2;
}

