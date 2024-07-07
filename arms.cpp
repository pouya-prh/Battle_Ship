#include "arms.h"


int Arms::mineCounter = 0;
int Arms::linearattackCounter = 0;
int Arms::atomicBombCounter = 0;
int Arms::trackerCounter = 0;
int Arms::airDefanceCounter = 0;

Arms::Arms() {}

bool Arms::BuyMine(User& user)
{
    if (user.GetDrop()>=5)
    {
        int drop = user.GetDrop() - 5;
        user.SetDrop(drop);
        mineCounter++;
        return true;
    }
    return false;
}
bool Arms::BuyAirDefance(User& user)
{
    if (user.GetLevel()>=2 && user.GetDrop()>=10)
    {
        int drop = user.GetDrop() - 10;
        user.SetDrop(drop);
        airDefanceCounter++;
        return true;
    }
    return false;
}
bool Arms::BuyTracker(User& user)
{
    if (user.GetLevel() >=3 && user.GetDrop() >=15)
    {
        int drop = user.GetDrop() - 15;
        user.SetDrop(drop);
        trackerCounter++;
        return true;
    }
    return false;
}
bool Arms::BuyLinearAttack(User& user)
{
    if (user.GetLevel() >=1 && user.GetDrop() >=12)
    {
        int drop = user.GetDrop() - 12;
        user.SetDrop(drop);
        trackerCounter++;
        return true;
    }
    return false;
}
bool Arms::BuyAtomicBomb(User& user)
{
    int level = user.GetLevel();
    int drop = user.GetDrop();
    if (level >=4 && drop >=100)
    {
        int drop = user.GetDrop() - 100;
        user.SetDrop(drop);
        trackerCounter++;
        return true;
    }
    return false;
}




