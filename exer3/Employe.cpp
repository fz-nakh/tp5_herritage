#include "Employe.h"
int Employe::compt = 0;

Employe::Employe():nom(""),indice_salarial(0)
{
	Employe::compt++;
	this->matricule= Employe::compt;
}

Employe::Employe(string nom, int matricule, int indice_salarial):matricule(++Employe::compt),nom(nom), indice_salarial(indice_salarial)
{
}

Employe::Employe(const Employe& e):nom(e.nom), indice_salarial(e.indice_salarial)
{
	Employe::compt++;
	this->matricule = Employe::compt;

}

int Employe::salaire(int aug)
{
	int sal;
	sal = this->indice_salarial * aug;
	return sal;
}

void Employe::afficher() 
{
	int aug;
	cout << "nom: " << this->nom << endl;
	cout << "matricule: " << this->matricule << endl;
	cout << "entrer l'augmentation" << endl;
	cin >> aug;
	this->sal =salaire(aug);
	 cout << "salaire est: " << this->sal << endl;
}
