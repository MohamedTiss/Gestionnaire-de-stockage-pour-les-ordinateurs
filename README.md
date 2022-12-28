# Gestionnaire de stockage pour les ordinateurs
## Introduction :
Ce programme est écrit en langage C qui sert à stocker les ordinateurs en prenant leurs informations.
Nous avons utilisé la notion de liste chaînée pour gagner de l'espace. Ce programme effectue les tâches suivantes :
- ajouter un ordinateur
- afficher les caractéristiques d'un ordinateur à l'aide de sa référence
- rechercher si un ordinateur existe dans notre stock ou non
- modifier les caractéristiques d'un ordinateur
- supprimer un ordinateur
- afficher le stock d'un jour donné
- afficher le stock d'un mois donné
### Les nouveaux types utilisés :
Nous avons créé 5 types dans ce programme qui sont :
- CPU:
Qui est construit de 4 champs qui sont modele, nb_coeurs, frequence et memoire_cache.
- Date :
Qui est construit de 3 champs qui sont le jour, le mois et an.
- Stockage :
Qui est construit de 2 champs qui sont type_disque_dur et capacite_stockage.
- Ordinateur :
Qui est composé de 12 champs qui sont ref (référence), marque, S (stockage), RAM, systeme_exploitation, taille_ecran, carte_graphique, type_clavier, prix, poids,
p (CPU) et autonomie.
- Noeud:
 Qui est construit de 3 champs qui sont ordinateur, date qui définit la date d'ajout ou de vente de l'ordinateur et suivi qui est un pointeur sur l'ordinateur suivant.
 ### Fonctions utilisées :
 Nous avons utilisé 10 fonctions dans ce programme qui sont :
 - Creernoeud :
 Qui prend un ordinateur et une date comme paramètres et crée un nœud.
 - AjouterAuStock :
 Qui prend en paramètre un pointeur sur l'adresse du 1er élément de la liste chaînée, un ordinateur et la date et l'ajout dans la liste chaînée.
 - RechercheOrdinateur :
 Qui prend en paramètre l'adresse du 1er élément de la liste chaînée et la référence d'un ordinateur et recherche si cet ordinateur existe ou non dans la liste
 et retourne son adresse s'il est trouvée sinon elle retourne NULL.
 - Ajout :
 Qui prend en paramètre un pointeur sur l'adresse du 1er élément de la liste chaînée et un ordinateur, il prend les caractéristiques d'un ordinateur et l'ajout
 à la liste chaînée.
 - Recherche :
 Qui prend en paramètre l'adresse du 1er élément de la liste et la référence d'un ordinateur et recherche s'il existe dans la liste ou non à l'aide de la fonction
 rechercheOrdinateur et affiche sa marque et sa RAM s'il est trouvée.
 - Modification:
 Qui prend en paramètre l'adresse du 1er élément de la liste chaînée et qui modifie les caractéristiques d'un ordinateur donné.
 - AfficherOrdinateur :
 Qui prend en paramètre l'adresse du 1er élément de la liste chaînée et la référence d'un ordinateur et affiche ses caractéristiques.
 - Delete_ordinateur :
 Qui prend en paramètre un pointeur sur l'adresse du 1er élément de la liste chaînée 1 et un pointeur sur l'adresse du 1er élément de la liste chaînée 2
 et supprimer un ordinateur de la liste 1 et l'ajouter à la liste 2.
 - Affjour:
 Qui prend en paramètre l'adresse du 1er élément de la liste et une date et affiche tous les ordinateurs qui sont enregistrés ou vendus à cette date.
 -Affmois :
 Qui prend en paramètre l'adresse du 1er élément de la liste, un mois et une année et affiche tous les ordinateurs qui sont enregistrés ou vendus ce mois-ci.
