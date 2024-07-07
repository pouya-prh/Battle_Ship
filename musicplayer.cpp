#include "musicplayer.h"

MusicPlayer::MusicPlayer()
{

    player = new QMediaPlayer();
    AudioOutput = new QAudioOutput();
    player->setAudioOutput(AudioOutput);
    connect(player, &QMediaPlayer::mediaStatusChanged, this, &MusicPlayer::handleMediaStatusChanged);
}

void MusicPlayer::playMusic()
{

    player->setSource(QUrl("qrc:/Ocean.mp3"));
    player->play();

}
void MusicPlayer::handleMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {

        player->play();
    }

}
