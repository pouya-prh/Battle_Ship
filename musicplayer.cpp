#include "musicplayer.h"

MusicPlayer::MusicPlayer()
{

    player = new QMediaPlayer();
    AudioOutput = new QAudioOutput();
    player->setAudioOutput(AudioOutput);
    connect(player, &QMediaPlayer::mediaStatusChanged, this, &MusicPlayer::handleMediaStatusChanged);
}
void MusicPlayer::sendOceanPath()
{
    playMusic("qrc:/Ocean.mp3");
}

void MusicPlayer::playMusic(QString Path)
{

    player->setSource(QUrl(Path));
    player->play();

}
void MusicPlayer::handleMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {

        player->play();
    }

}
