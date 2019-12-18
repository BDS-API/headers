#pragma once

class NullSoundPlayer : SoundPlayer {

public:
    virtual ~NullSoundPlayer();
    virtual void play(std::string const&, Vec3 const&, float, float);
    virtual void playUI(std::string const&, float, float);
    virtual void playMusic(std::string const&, float, unsigned int &);
    virtual void playMusic(std::string const&, float);
    virtual bool isPlayingMusicEvent(std::string const&)const;
    virtual bool isPlayingMusic(Core::Path const&)const;
    virtual void fadeToStopMusic(void);
    virtual void stopMusic(void);
    virtual void stop(std::string const&);
    virtual void stop(unsigned long);
    virtual void stopAllSounds(void);
    virtual void getCurrentlyPlayingMusicName[abi:cxx11](void);
    virtual void getItem(std::string const&, Core::Path const&, SoundItem &)const;
    virtual void registerLoop(std::string const&, std::function<void ()(LoopingSoundState &)>);
    virtual void unregisterLoop(unsigned long);
    virtual bool isPlayingSound(unsigned long)const;
    virtual void playAttached(std::string const&, std::function<void ()(SoundInstanceProperties &)> &&);
    virtual void stopAllDelayedSoundActions(void);

};
