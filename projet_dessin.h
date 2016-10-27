//---------------------------------------------------------------------------

#ifndef projet_dessinH
#define projet_dessinH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <DBCtrls.hpp>
#include <vector>
//---------------------------------------------------------------------------
class TfnPrincipale : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *btEtapeInit;
    TImage *Image1;
	TButton *btEtape;
	TButton *btTrans;
	TButton *btDivOU;
	TButton *btTransBis;
	TButton *btConvOU;
	TButton *dtDivEt;
	TButton *btConvET;
	TButton *btDecalBas;
	TButton *btDecalDroite;
	TButton *demi_decal_bas;
	TButton *btEdit;
	TButton *btRenvoi;
	void __fastcall btEtapeInitClick(TObject *Sender);
    void __fastcall btEtapeClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormDestroy(TObject *Sender);
	void __fastcall dtDivEtClick(TObject *Sender);
	void __fastcall btConvETClick(TObject *Sender);
	void __fastcall btEditClick(TObject *Sender);
	void __fastcall btRenvoiClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TfnPrincipale(TComponent* Owner);
	TList * Liste_etapes;
	// Déclaration d'un pointeur de TEdit pour les étapes
	TLabel * Etape;
	void __fastcall btRenvoiClick(UnicodeString);
	void __fastcall btEtapeInitClick(UnicodeString);

};
//---------------------------------------------------------------------------
extern PACKAGE TfnPrincipale *fnPrincipale;
//---------------------------------------------------------------------------
#endif
