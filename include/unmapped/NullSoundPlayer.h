#pragma once

#include "../bedrock/util/Vec3"
#include "../core/Path"


class NullSoundPlayer : SoundPlayer {

public:
    virtual NullSoundPlayer::~NullSoundPlayer()
    virtual void play(std::string const&, Vec3 const&, float, float);
    virtual void playUI(std::string const&, float, float);
    virtual void playMusic(std::string const&, float, unsigned int &);
    virtual void playMusic(std::string const&, float);
    virtual bool isPlayingMusicEvent(std::string const&)const;
    virtual bool isPlayingMusic(Core::Path const&)const;
    virtual void fadeToStopMusic();
    virtual void stopMusic();
    virtual void stop(std::string const&);
    virtual void stop(unsigned long);
    virtual void stopAllSounds();
    virtual void getCurrentlyPlayingMusicName();
    virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const;
    virtual void registerLoop(std::string const&, std::function<void ()(LoopingSoundState &)>);
    virtual void unregisterLoop(unsigned long);
    virtual bool isPlayingSound(unsigned long)const;
    virtual void playAttached(std::string const&, std::function<void ()(SoundInstanceProperties &)> &&);
    virtual void stopAllDelayedSoundActions();

};
