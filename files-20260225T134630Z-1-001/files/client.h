#ifndef _CLIENT
#define _CLIENT

class train;
class tram;

class client
{
public:
    void accept(train *visitor);
    void accept(tram *visitor);
    void setPosition(int x, int y);
    int getX();
    int getY();
    ~client();
    client();

private:
    int positionX = 0;
    int positionY = 0;
};
#endif
