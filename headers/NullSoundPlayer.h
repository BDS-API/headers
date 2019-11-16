#pragma once

class NullSoundPlayer : SoundPlayer {

    virtual ~NullSoundPlayer();
    virtual ~NullSoundPlayer();
    virtual void play(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void playUI(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, float);
    virtual void playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, unsigned int &);
    virtual void playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float);
    virtual void isPlayingMusicEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void isPlayingMusic(Core::Path const&)const;
    virtual void fadeToStopMusic(void);
    virtual void stopMusic(void);
    virtual void stop(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void stop(unsigned long);
    virtual void stopAllSounds(void);
    virtual void _ZN15NullSoundPlayer28getCurrentlyPlayingMusicNameB5cxx11Ev;
    virtual void getItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, SoundItem &)const;
    virtual void registerLoop(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(LoopingSoundState &)>);
    virtual void unregisterLoop(unsigned long);
    virtual void isPlayingSound(unsigned long)const;
    virtual void playAttached(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(SoundInstanceProperties &)> &&);
    virtual void stopAllDelayedSoundActions(void);
}
