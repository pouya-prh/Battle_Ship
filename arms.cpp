#include "arms.h"
#include <QMediaPlayer>
#include <QAudioOutput>


Arms::Arms()
{
    mineCounter = 0;
    linearattackCounter = 0;
    atomicBombCounter = 0;
    trackerCounter = 0;
    airDefanceCounter = 0;
}
Arms::Arms(int mineCounter,int airDefenseCounter,int atomicBombCounter,int linearAttackCounter,int trackerCounter)
{
    mineCounter = 0;
    linearattackCounter = 0;
    atomicBombCounter = 0;
    trackerCounter = 0;
    airDefanceCounter = 0;
    this->mineCounter = mineCounter;
    this->linearattackCounter = linearAttackCounter;
    this->airDefanceCounter = airDefenseCounter;
    this->atomicBombCounter = atomicBombCounter;
    this->trackerCounter = trackerCounter;
}
bool Arms::BuyMine(User& user)
{
    if (user.GetDrop()>=5&&mineCounter<2)
    {
        QMediaPlayer* player = new QMediaPlayer();
        QAudioOutput* output = new QAudioOutput();
        player->setAudioOutput(output);
        player->setSource(QUrl("qrc:/ArsenalBuy.mp3"));
        player->play();
        int drop = user.GetDrop() - 5;
        user.SetDrop(drop);
        mineCounter++;
        return true;
    }
    return false;
}
bool Arms::BuyAirDefance(User& user)
{
    if (user.GetLevel()>=2 && user.GetDrop()>=10 && airDefanceCounter<2)
    {
        QMediaPlayer* player = new QMediaPlayer();
        QAudioOutput* output = new QAudioOutput();
        player->setAudioOutput(output);
        player->setSource(QUrl("qrc:/ArsenalBuy.mp3"));
        player->play();
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
        QMediaPlayer* player = new QMediaPlayer();
        QAudioOutput* output = new QAudioOutput();
        player->setAudioOutput(output);
        player->setSource(QUrl("qrc:/ArsenalBuy.mp3"));
        player->play();
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
        QMediaPlayer* player = new QMediaPlayer();
        QAudioOutput* output = new QAudioOutput();
        player->setAudioOutput(output);
        player->setSource(QUrl("qrc:/ArsenalBuy.mp3"));
        player->play();
        int drop = user.GetDrop() - 12;
        user.SetDrop(drop);
        linearattackCounter++;
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
        QMediaPlayer* player = new QMediaPlayer();
        QAudioOutput* output = new QAudioOutput();
        player->setAudioOutput(output);
        player->setSource(QUrl("qrc:/ArsenalBuy.mp3"));
        player->play();
        int drop = user.GetDrop() - 100;
        user.SetDrop(drop);
        atomicBombCounter++;
        return true;
    }
    return false;
}
int Arms::getAirDefanceCount()
{
    return airDefanceCounter;
}

int Arms::getAtomicBombCount()
{
    return atomicBombCounter;
}
int Arms::getMineCount()
{
    return mineCounter;
}
int Arms::getLineAttackerCount()
{
    return linearattackCounter;
}
int Arms::getTrackerCount()
{
    return trackerCounter;
}
void Arms::linearAttackMinus()
{
    linearattackCounter--;
}
void Arms::trackerMinus()
{
    trackerCounter--;
}
void Arms::atomicBombMinus()
{
    atomicBombCounter--;
}

