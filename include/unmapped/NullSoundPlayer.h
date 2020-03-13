#pragma once

#include <string>
#include <functional>
#include "SoundPlayer.h"


class NullSoundPlayer : SoundPlayer {

public:
    ~NullSoundPlayer(); // _ZN15NullSoundPlayerD2Ev
    virtual void play(std::string const&, Vec3 const&, float, float); // _ZN15NullSoundPlayer4playERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3ff
    virtual void playUI(std::string const&, float, float); // _ZN15NullSoundPlayer6playUIERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEff
    virtual void playMusic(std::string const&, float, unsigned int &); // _ZN15NullSoundPlayer9playMusicERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEfRj
    virtual void playMusic(std::string const&, float); // _ZN15NullSoundPlayer9playMusicERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEf
    virtual bool isPlayingMusicEvent(std::string const&)const; // _ZNK15NullSoundPlayer19isPlayingMusicEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isPlayingMusic(Core::Path const&)const; // _ZNK15NullSoundPlayer14isPlayingMusicERKN4Core4PathE
    virtual void fadeToStopMusic(); // _ZN15NullSoundPlayer15fadeToStopMusicEv
    virtual void stopMusic(); // _ZN15NullSoundPlayer9stopMusicEv
    virtual void stop(std::string const&); // _ZN15NullSoundPlayer4stopERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void stop(unsigned long); // _ZN15NullSoundPlayer4stopEm
    virtual void stopAllSounds(); // _ZN15NullSoundPlayer13stopAllSoundsEv
    virtual std::string getCurrentlyPlayingMusicName(); // _ZN15NullSoundPlayer28getCurrentlyPlayingMusicNameB5cxx11Ev
//  virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const; //TODO: incomplete function definition // _ZNK15NullSoundPlayer7getItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathER9SoundItem
    virtual void registerLoop(std::string const&, std::function<void (LoopingSoundState &)>); // _ZN15NullSoundPlayer12registerLoopERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFvR17LoopingSoundStateEE
    virtual void unregisterLoop(unsigned long); // _ZN15NullSoundPlayer14unregisterLoopEm
    virtual bool isPlayingSound(unsigned long)const; // _ZNK15NullSoundPlayer14isPlayingSoundEm
    virtual void playAttached(std::string const&, std::function<void (SoundInstanceProperties &)> &&); // _ZN15NullSoundPlayer12playAttachedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt8functionIFvR23SoundInstancePropertiesEE
    virtual void stopAllDelayedSoundActions(); // _ZN15NullSoundPlayer26stopAllDelayedSoundActionsEv
};
