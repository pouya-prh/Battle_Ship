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
        void playMusic(QString);
        void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);
        void sendOceanPath();

    private:
        QMediaPlayer* player;
        QAudioOutput* AudioOutput;
};

#endif // MUSICPLAYER_H
