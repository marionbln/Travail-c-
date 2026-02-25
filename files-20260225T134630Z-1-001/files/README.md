# Projet : Implémentation du Design Pattern Visitor (C++)

Ce projet illustre l'utilisation du **Design Pattern Visitor** à travers un exemple de gestion de déplacements de clients par différents moyens de transport (Train et Tram).

## 1. Description du Projet
L'objectif est de permettre à des objets de type `client` de recevoir des opérations externes (visiteurs) sans modifier leur structure interne. 

Le pattern repose sur le mécanisme de **Double Dispatch** :
* **L'Élément** : La classe `client` possède une méthode `accept()` qui prend un visiteur en paramètre.
* **Les Visiteurs** : Les classes `train` et `tram` définissent la logique métier (déplacement) dans leur méthode `visit()` respective.



## 2. Structure des Fichiers
L'archive contient les fichiers suivants :
* `client.h` / `client.cpp` : Définit l'entité avec une position $(x, y)$ initiale de $(5, 5)$.
* `train.h` / `train.cpp` : Visiteur appliquant un déplacement de $+1$ en X et $+1$ en Y.
* `tram.h` / `tram.cpp` : Visiteur appliquant un déplacement de $+3$ en X et $+2$ en Y.
* `main.cpp` : Point d'entrée démontrant l'enchaînement des visites sur un client.
* `makefile` : Script de compilation utilisant `g++` avec le standard `C++17`.

## 3. Compilation et Exécution

### Prérequis
* Un compilateur C++ (g++)
* L'outil Make

### Instructions
1. **Compiler le projet** :
   ```bash
   make
Exécuter le programme :

Bash
./main
Nettoyer les fichiers objets :

Bash
make clean
## 4. Scénario de Test et Résultats
Le programme main exécute le flux suivant :

Initialisation : Le client est créé à la position (5, 5).

Passage du Train : Le train visite le client, affiche sa position et le déplace à (6, 6).

Passage du Tram : Le tram visite le client à sa nouvelle position et le déplace finalement à (9, 8).

## 5. Avantages démontrés
Extensibilité : On peut ajouter un visiteur Bus sans modifier la logique de données de la classe client.


Séparation des préoccupations : La classe client gère ses données, les visiteurs gèrent les algorithmes.
