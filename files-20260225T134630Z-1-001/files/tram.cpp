#include "client.h"
#include "tram.h"
#include <iostream>

void tram::visit(client *client2)
{
    std::cout << "Le client est à la position : (" << client2->getX() << ", " << client2->getY() << ")" << std::endl;
    std::cout << "Le tram se déplace vers la position (" << client2->getX() << ", " << client2->getY() << ")" << std::endl;
    // Modification de la position du client
    client2->setPosition(client2->getX() + 3, client2->getY() + 2);
    std::cout << "Le client a été déplacé vers la position (" << client2->getX() << ", " << client2->getY() << ")" << std::endl;
}
