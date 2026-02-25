#include <iostream>
#include "client.h"
#include "train.h"
#include "tram.h"

int main()
{
    // Création d'un client
    client client1;

    // Création d'un visiteur
    train train1;

    // Création d'un visiteur
    tram tram1;

    // Appel de la méthode accept pour le client, avec le visiteur en paramètre
    client1.accept(&train1);
    client1.accept(&tram1);

    return 0;
}
