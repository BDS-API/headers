#pragma once

#include <string>
#include "../bedrock/util/Vec3.h"
#include "../core/Path.h"
#include <functional>
#include "SoundPlayer.h"


class NullSoundPlayer : SoundPlayer {

public:
    virtual bool isPlayingMusicEvent(std::string const&)const;
//  virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const; //TODO: incomplete function definition
    virtual void playMusic(std::string const&, float, unsigned int &);
    virtual bool isPlayingMusic(Core::Path const&)const;
    virtual std::string getCurrentlyPlayingMusicName();
    virtual void unregisterLoop(unsigned long);
    virtual bool isPlayingSound(unsigned long)const;
    virtual void stopMusic();
    virtual void stop(std::string const&);
    ~NullSoundPlayer();
    virtual void stopAllDelayedSoundActions();
    virtual void play(std::string const&, Vec3 const&, float, float);
    virtual void stopAllSounds();
    virtual void playMusic(std::string const&, float);
    virtual void fadeToStopMusic();
//  virtual void registerLoop(std::string const&, std::function<void (LoopingSoundState &)>); //TODO: incomplete function definition
    virtual void stop(unsigned long);
//  virtual void playAttached(std::string const&, std::function<void (SoundInstanceProperties &)> &&); //TODO: incomplete function definition
    virtual void playUI(std::string const&, float, float);
};
