#ifndef ARMS_H
#define ARMS_H
#include "user.h"

class Arms
{
private:
    static int mineCounter;
    static int linearattackCounter;
    static int atomicBombCounter;
    static int trackerCounter;
    static int airDefanceCounter;

public:
    Arms();

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
