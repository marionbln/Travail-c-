#include "client.h"
#include "train.h"
#include <iostream>

void train::visit(client *client)
{
    std::cout << "Le client est à la position : (" << client->getX() << ", " << client->getY() << ")" << std::endl;
    std::cout << "Le train se déplace vers la position (" << client->getX() << ", " << client->getY() << ")" << std::endl;
    // Modification de la position du client
    client->setPosition(client->getX() + 1, client->getY() + 1);
    std::cout << "Le client a été déplacé vers la position (" << client->getX() << ", " << client->getY() << ")" << std::endl;
}
