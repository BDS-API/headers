#pragma once

#include "../bedrock/util/Vec3.h"
#include "../core/Path.h"
#include "./SoundPlayer.h"
#include <functional>
#include <string>


class NullSoundPlayer : SoundPlayer {

public:
    virtual ~NullSoundPlayer();
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
    virtual std::string getCurrentlyPlayingMusicName();
//  virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const; //TODO: incomplete function definition
//  virtual void registerLoop(std::string const&, std::function<void (LoopingSoundState &)>); //TODO: incomplete function definition
    virtual void unregisterLoop(unsigned long);
    virtual bool isPlayingSound(unsigned long)const;
//  virtual void playAttached(std::string const&, std::function<void (SoundInstanceProperties &)> &&); //TODO: incomplete function definition
    virtual void stopAllDelayedSoundActions();

};
