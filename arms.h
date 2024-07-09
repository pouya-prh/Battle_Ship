#ifndef ARMS_H
#define ARMS_H
#include "user.h"

class Arms
{
private:
     int mineCounter;
     int linearattackCounter;
     int atomicBombCounter;
     int trackerCounter;
     int airDefanceCounter;

public:
    Arms();
    Arms(int,int,int,int,int);

    bool BuyMine(User&);
    bool BuyLinearAttack(User&);
    bool BuyAtomicBomb(User&);
    bool BuyTracker(User&);
    bool BuyAirDefance(User&);
    int getMineCount();
    int getLineAttackerCount();
    int getAtomicBombCount();
    int getTrackerCount();
    int getAirDefanceCount();
    void linearAttackMinus();
    void atomicBombMinus();
    void trackerMinus();

};





#endif // ARMS_H
