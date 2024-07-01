#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QObject>

class MusicPlayer:public QObject
{
        Q_OBJECT
    public:
        MusicPlayer();

    public slots:
        void playMusic();
        void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);
    private:
        QMediaPlayer* player;
        QAudioOutput* AudioOutput;
};

#endif // MUSICPLAYER_H
