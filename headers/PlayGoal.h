#pragma once

class PlayGoal : Goal {

    virtual void Play~PlayGoal();
    virtual void Play~PlayGoal();
    virtual void PlaycanUse(void);
    virtual void PlaycanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Playstart(void);
    virtual void Playstop(void);
    virtual void Playtick(void);
    virtual void PlayappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
