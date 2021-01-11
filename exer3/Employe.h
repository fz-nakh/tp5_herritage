#pragma once
#include <string>
#include<iostream>
using namespace std;
class Employe
{
public:
	Employe();
	Employe(string nom,int matricule,int indice_salarial);
	Employe(const Employe & e);
	int salaire(int aug);//multipliant cet indice par une certaine valeur qui peut changer en cas d’augmentation généraledes salaires
	void afficher();
		
		/*2. Certains employés ont des responsabilités hiérarchiques.Ils ont sous leurs ordres
		d’autres employés.Ecrivez une sous - classe des employés qui représente ces
		responsables en enregistrant leurs inférieurs hiérarchiques directs dans un tableau.
		Ecrivez une méthode qui affiche les inférieurs directs(placés directement sous leurs
			ordres) et une autre qui affiche les employés inférieurs directs ou indirects(c’est à dire
				les subordonnés des subordonnés).On suppose que la hiérarchie de l’entreprise en
		pyramidale*/

private:
	static int compt;
	string nom;
	int matricule;// (qui l’identifie de façon unique)
	int indice_salarial,sal;
};

