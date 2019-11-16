#pragma once

class NullSoundPlayer : SoundPlayer {

    virtual void Null~NullSoundPlayer();
    virtual void Null~NullSoundPlayer();
    virtual void Nullplay(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void NullplayUI(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, float);
    virtual void NullplayMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, unsigned int &);
    virtual void NullplayMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float);
    virtual void NullisPlayingMusicEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void NullisPlayingMusic(Core::Path const&)const;
    virtual void NullfadeToStopMusic(void);
    virtual void NullstopMusic(void);
    virtual void Nullstop(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void Nullstop(unsigned long);
    virtual void NullstopAllSounds(void);
    virtual void _ZN15NullSoundPlayer28getCurrentlyPlayingMusicNameB5cxx11Ev;
    virtual void NullgetItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, SoundItem &)const;
    virtual void NullregisterLoop(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(LoopingSoundState &)>);
    virtual void NullunregisterLoop(unsigned long);
    virtual void NullisPlayingSound(unsigned long)const;
    virtual void NullplayAttached(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(SoundInstanceProperties &)> &&);
    virtual void NullstopAllDelayedSoundActions(void);
}
