#pragma once

#include <string>
#include <functional>
#include "SoundPlayer.h"


class NullSoundPlayer : SoundPlayer {

public:
    virtual std::string getCurrentlyPlayingMusicName();
    virtual void playMusic(std::string const&, float);
    virtual void stop(unsigned long);
    virtual void playUI(std::string const&, float, float);
    virtual void playAttached(std::string const&, std::function<void (SoundInstanceProperties &)> &&);
//  virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const; //TODO: incomplete function definition
    virtual bool isPlayingSound(unsigned long)const;
    virtual void registerLoop(std::string const&, std::function<void (LoopingSoundState &)>);
    virtual void fadeToStopMusic();
    virtual void stopMusic();
    virtual void stopAllSounds();
    virtual bool isPlayingMusic(Core::Path const&)const;
    virtual void playMusic(std::string const&, float, unsigned int &);
    virtual bool isPlayingMusicEvent(std::string const&)const;
    virtual void play(std::string const&, Vec3 const&, float, float);
    virtual void stopAllDelayedSoundActions();
    virtual void unregisterLoop(unsigned long);
    ~NullSoundPlayer();
    virtual void stop(std::string const&);
};
