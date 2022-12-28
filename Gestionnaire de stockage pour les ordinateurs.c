#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char modele[50];
    int nb_coeurs;
    int frequence;
    int memoire_cache;
}CPU;
typedef struct {
	int jour;
	int mois;
	int an;
}Date;
typedef struct {
    char type_disque_dur[20];
    int  capacite_stockage;
}Stockage;

typedef struct{
    int ref;
    char marque[50];
    Stockage S;
    int RAM;
    char systeme_exploitation[50];
    int  taille_ecran;
    char carte_graphique[30];
    char type_clavier[5];
    int prix;
    float poids;
    CPU p;
    int autonomie;
}Ordinateur;
typedef struct Noeud {
    Ordinateur ordinateur;
    Date date;
    struct Noeud *suivant;
} Noeud;
Noeud * creerNoeud(Ordinateur ordinateur,Date d) {
    Noeud *nouveau = (Noeud *) malloc(sizeof(Noeud));
    nouveau->ordinateur = ordinateur;
    nouveau->date = d;
    nouveau->suivant = NULL;
    return nouveau;
}
Noeud *rechercherOrdinateur(Noeud *liste, int ref) {
    Noeud *noeudActuel = liste;

    while (noeudActuel != NULL) {
        if (noeudActuel->ordinateur.ref == ref) {
            return noeudActuel;
        }
        noeudActuel = noeudActuel->suivant;
    }
    return NULL;
}
void ajouterAuStock(Noeud **tete, Ordinateur ordinateur,Date d) {
    Noeud *nouveau = creerNoeud(ordinateur,d);
    nouveau->suivant = *tete;
    *tete = nouveau;
}
void ajout(Noeud **head, Ordinateur ordinateur){
	int i=0;
	printf("combien de pc vous voulez ajouter ? \n");
	scanf("%d",&i);
	for(int j=0;j<i;j++){
		Date d;
	    printf("Donner les caracteristiques de l'ordinateur N %d :", j+1 );
	    printf("Donner la reference : ");
	    scanf("%d", &ordinateur.ref); 
	    printf("la marque : ");
	    scanf("%s", &ordinateur.marque);
	    printf("Donner le type disque dur (HDD/SSD) : ");
	    scanf("%s", &(ordinateur.S.type_disque_dur));
	    printf("Donner la capacite de stockage (To) : ");
	    scanf("%d", &(ordinateur.S.capacite_stockage));
	    printf("Donner la  RAM : ");
	    scanf("%d", &ordinateur.RAM);
	    printf("Donner le systeme_exploitation : ");
	    scanf("%s", &ordinateur.systeme_exploitation);
	    printf("Donner la taille_ecran (pouces): ");
	    scanf("%d", &ordinateur.taille_ecran);
	    printf("Donner la carte_graphique : ");
	    scanf("%s", &ordinateur.carte_graphique);
	    printf("Donner le type_clavier retroeclaire (oui/non) : ");
	    scanf("%s", &ordinateur.type_clavier);
	    printf("Donner le prix (DT): ");
	    scanf("%d", &ordinateur.prix);
	    printf("Donner le poids (kg) : ");
	    scanf("%d", &ordinateur.poids);
	    printf("Donner l'autonomie (heures) : ");
	    scanf("%d", &ordinateur.autonomie);
	    printf("Donner modele du CPU : ");
	    scanf("%s", &(ordinateur.p.modele));
	    printf("Donner le nb_coeurs du CPU : ");
	    scanf("%d", &(ordinateur.p.nb_coeurs));
	    printf("Donner la frequence d'horloge du CPU (Hz) : ");
	    scanf("%d", &(ordinateur.p.frequence));
	    printf("Donner memoire cache du CPU : ");
	    scanf("%d", &(ordinateur.p.memoire_cache));
	    printf("Donner la date d'ajout (jj mm aaaa) : ");
	    scanf("%d",&d.jour);
	    scanf("%d",&d.mois);
	    scanf("%d",&d.an);
	    ajouterAuStock(&(*head),ordinateur,d);
	}
}

void recherche(Noeud *liste, int ref){
	Noeud *noeudActuel = rechercherOrdinateur(liste,ref);
    if (noeudActuel!=NULL){
        printf("Ordinateur trouve! Marque: %s, RAM: %d\n", noeudActuel->ordinateur.marque, noeudActuel->ordinateur.RAM);
    }
	else{
        printf("Ordinateur non trouve\n");
    }
}
void modification(Noeud *liste) {
	Ordinateur nouvellesValeurs;
    int ref;
    printf("donner la reference de l'ancien ordinateur : ");
    scanf("%d",&ref);
    Noeud *noeudActuel = rechercherOrdinateur(liste,ref);
    
    if (noeudActuel=NULL) {
    	Date d;
    	Ordinateur nouvellesValeurs;
	    printf("Veuillez entrer les informations de l'ordinateur à modifier :\n");
	    printf("entrer les nouvelles caracteristiques de l'ordinateur  ");
	    printf("\n Donner la  nouvelle reference : ");
	    scanf("%d", &nouvellesValeurs.ref); 
	    printf("la marque : ");
	    scanf("%s", &nouvellesValeurs.marque);
	    printf("Donner le type disque dur (HDD/SSD) : ");
	    scanf("%s", &(nouvellesValeurs.S.type_disque_dur));
	    printf("Donner la capacite de stockage (Go) : ");
	    scanf("%d", &(nouvellesValeurs.S.capacite_stockage));
	    printf("Donner la  RAM : ");
	    scanf("%d", &nouvellesValeurs.RAM);
	    printf("Donner le systeme_exploitation : ");
	    scanf("%s", &nouvellesValeurs.systeme_exploitation);
	    printf("Donner la taille_ecran (pouces): ");
	    scanf("%d", &nouvellesValeurs.taille_ecran);
	    printf("Donner la carte_graphique : ");
	    scanf("%s", &nouvellesValeurs.carte_graphique);
	    printf("Donner le type_clavier retroeclaire (oui/non) : ");
	    scanf("%s", &nouvellesValeurs.type_clavier);
	    printf("Donner le prix (DT): ");
	    scanf("%d", &nouvellesValeurs.prix);
	    printf("Donner le poids (kg) : ");
	    scanf("%d", &nouvellesValeurs.poids);
	    printf("Donner l'autonomie (heures) : ");
	    scanf("%d", &nouvellesValeurs.autonomie);
	    printf("Donner modele du CPU : ");
	    scanf("%s", &(nouvellesValeurs.p.modele));
	    printf("Donner le nb_coeurs du CPU : ");
	    scanf("%d", &(nouvellesValeurs.p.nb_coeurs));
	    printf("Donner la frequence d'horloge du CPU (Hz) : ");
	    scanf("%d", &(nouvellesValeurs.p.frequence));
	    printf("Donner memoire cache du CPU : ");
	    scanf("%d", &(nouvellesValeurs.p.memoire_cache));
	    printf("Donner la date d'ajout (jj mm aaaa) : ");
	    scanf("%d",&d.jour);
	    scanf("%d",&d.mois);
	    scanf("%d",&d.an);
        noeudActuel->ordinateur.ref = nouvellesValeurs.ref;
	    strcpy(noeudActuel->ordinateur.marque , nouvellesValeurs.marque);
	    strcpy(noeudActuel->ordinateur.p.modele, nouvellesValeurs.p.modele);
	    noeudActuel->ordinateur.p.nb_coeurs = nouvellesValeurs.p.nb_coeurs;
	    noeudActuel->ordinateur.p.frequence = nouvellesValeurs.p.frequence;
	    noeudActuel->ordinateur.p.memoire_cache = nouvellesValeurs.p.memoire_cache;
	    strcpy(noeudActuel->ordinateur.S.type_disque_dur, nouvellesValeurs.S.type_disque_dur);
	    noeudActuel->ordinateur.S.capacite_stockage = nouvellesValeurs.S.capacite_stockage;
	    noeudActuel->ordinateur.RAM = nouvellesValeurs.RAM;
	    strcpy(noeudActuel->ordinateur.systeme_exploitation, nouvellesValeurs.systeme_exploitation);
	    noeudActuel->ordinateur.taille_ecran = nouvellesValeurs.taille_ecran;
	    strcpy(noeudActuel->ordinateur.carte_graphique, nouvellesValeurs.carte_graphique);
	    strcpy(noeudActuel->ordinateur.type_clavier, nouvellesValeurs.type_clavier);
	    noeudActuel->ordinateur.prix = nouvellesValeurs.prix;
	    noeudActuel->ordinateur.poids = nouvellesValeurs.poids;
	    noeudActuel->ordinateur.autonomie = nouvellesValeurs.autonomie;
	    noeudActuel->date=d;
    }
    else{
    	printf("ce pc n'existe pas encore\n");
	}
}

void afficherOrdinateur(Noeud *liste,int ref) {

    Noeud *noeudActuel = rechercherOrdinateur(liste,ref);
	
    if ( noeudActuel!=NULL) {
        printf("Référence: %d\n", noeudActuel->ordinateur.ref);
        printf("Marque: %s\n", noeudActuel->ordinateur.marque);
        printf("Type de disque dur: %s\n", noeudActuel->ordinateur.S.type_disque_dur);
        printf("Capacité de stockage: %d GB\n", noeudActuel->ordinateur.S.capacite_stockage);
        printf("RAM: %d GB\n", noeudActuel->ordinateur.RAM);
        printf("Système d'exploitation: %s\n", noeudActuel->ordinateur.systeme_exploitation);
        printf("Taille de l'écran: %d pouces\n", noeudActuel->ordinateur.taille_ecran);
        printf("Carte graphique: %s\n", noeudActuel->ordinateur.carte_graphique);
        printf("Type de clavier: %s\n", noeudActuel->ordinateur.type_clavier);
        printf("Prix: %d €\n", noeudActuel->ordinateur.prix);
        printf("Poids: %d kg\n", noeudActuel->ordinateur.poids);
        printf("Modèle CPU: %s\n", noeudActuel->ordinateur.p.modele);
        printf("Nombre de coeurs: %d\n", noeudActuel->ordinateur.p.nb_coeurs);
        printf("Fréquence: %d GHz\n", noeudActuel->ordinateur.p.frequence);
        printf("Mémoire cache: %d MB\n", noeudActuel->ordinateur.p.memoire_cache);
        printf("Autonomie: %d heures\n", noeudActuel->ordinateur.autonomie);
        printf("Date d'ajout : %d/%d/%d\n",noeudActuel->date.jour,noeudActuel->date.mois,noeudActuel->date.an);
    }
    else{
    	printf("ce pc n'est pas encore enregistrer \n");
	}
}
void delete_computer(Noeud **head,Noeud **tete) {
    Noeud* current = *head;
    Noeud* previous = NULL;
    int ref;
    int s=0;
    Date d;
    printf("Donner la date actuel (jj mm aaaa) :\n");
    scanf("%d",&d.jour);
    scanf("%d",&d.mois);
    scanf("%d",&d.an);
    printf("donner la reference du pc a supprime :\n");
	scanf("%d",&ref);
    while (current != NULL && current->ordinateur.ref != ref) {
        previous = current;
        current = current->suivant;
        s+=1;
    }

    if (current == NULL) {
        printf("l'ordinateur n'existe pas dans le stock");
    }
	else{
	    if (s==0) {
	    	Ordinateur ordinateur=current->ordinateur;
	    	ajouterAuStock(&(*tete),ordinateur,d);
	        *head = current->suivant;
	        free(current);
	        
	    }
	    else {
	    	ajouterAuStock(&(*tete),current->ordinateur,d);
	        previous->suivant = current;
	        free(current);
	        
	    }
	}
}
void affjour(Noeud *tete,Date d){
	Noeud *noeud=tete ;
	int s=0;
	while(noeud!=NULL){
		if(noeud->date.an==d.an && noeud->date.jour == d.jour && noeud->date.mois == d.mois){
			int ref=noeud->ordinateur.ref;
			afficherOrdinateur(tete,ref);
			printf("\n");
			printf("--------------------------------------------------------------------------------------------");
			s=1;
		}
		noeud=noeud->suivant;
	}
	if(s==0){
		printf("Il n'y a pad des ordinateurs enregistrer sur cette date\n ");
	}
}
void affmois(Noeud *tete,int m,int a){
	Noeud *noeud=tete ;
	int s=0;
	while(noeud!=NULL){
		if(noeud->date.an==a && noeud->date.mois==m){
			int ref=noeud->ordinateur.ref;
			afficherOrdinateur(tete,ref);
			printf("\n");
			printf("-------------------------------------------------------------------------------------------------------");
			s=1;
		}
		noeud=noeud->suivant;
	}
	if(s==0){
		printf("Il n'y a pad des ordinateurs enregistrer sur cet mois\n ");
	}
}
int main()
{
    Noeud *tete = NULL;
    Noeud *tete1 = NULL;
    int test = 1;
    while (test)
    {
        printf("\nMenu principal :\n");
        printf("1. Ajout d'un ordinateur\n");
        printf("2. Affichage des  ordinateurs\n");
        printf("3. Recherche d'un ordinateur\n");
        printf("4. Modification d'un ordinateur\n");
        printf("5. Suppression d'un ordinateur\n");
        printf("6. Afficher les ordinateurs ajoutes par jours\n");
        printf("7. Afficher les ordinateurs ajoutes par mois\n");
        printf("8. Afficher les ordinateurs vendus par jours\n");
        printf("9. Afficher les ordinateurs vendus par mois\n");
        printf("10. Quitter\n");
        printf("Veuillez choisir une option : ");
        int option;
        scanf("%d", &option);

        switch (option){
        case 1:
        {
            Ordinateur ordinateur;
            printf("Veuillez entrer les informations de l'ordinateur a ajouter et la quantite :\n");
            ajout(&tete, ordinateur);
            break;
        }
        case 2:
        {
            int ref;
			printf("donner la reference du pc a affiche :\n");
			scanf("%d",&ref);
            afficherOrdinateur(tete,ref);
            break;

        }
        case 3:
        {
            Ordinateur ordinateur;
            printf("Veuillez entrer les informations de l'ordinateur à rechercher :\n");
            int ref;
            printf("donner la reference de cet ordinateur : ");
            scanf("%d",&ref);
            recherche(tete, ref);
            break;
        }
        case 4:
        {
            modification(tete);
            break;
        }
        case 5:
        {        	
            delete_computer(&tete,&tete1);
            break;
        }
        case 6:
        {
        	Date d;
			printf("Donner la date (mm jj aaaa) : ");
        	scanf("%d",&d.jour);
        	scanf("%d",&d.mois);
        	scanf("%d",&d.an);
        	affjour(tete,d);
        	break;
		}
		case 7:
		{
			int m,a;
			printf("Donner le mois et l'annee (mm aaaa) : ");
        	scanf("%d",&m);
        	scanf("%d",&a);
        	affmois(tete,m,a);
        	break;
		}
		case 8:
        {
        	Date d;
			printf("Donner la date (mm jj aaaa) : ");
        	scanf("%d",&d.jour);
        	scanf("%d",&d.mois);
        	scanf("%d",&d.an);
        	affjour(tete1,d);
        	break;
		}
		case 9:
		{
			int m,a;
			printf("Donner le mois et l'annee (mm aaaa) : ");
        	scanf("%d",&m);
        	scanf("%d",&a);
        	affmois(tete1,m,a);
        	break;
		}
        case 10:
        {   test =0;
            break;
        }
        }

    }
    return(0);
}



