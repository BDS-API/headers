#pragma once

class MoveIndoorsGoal : Goal {

    virtual void MoveIndoors~MoveIndoorsGoal();
    virtual void MoveIndoors~MoveIndoorsGoal();
    virtual void MoveIndoorscanUse(void);
    virtual void MoveIndoorscanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MoveIndoorsstart(void);
    virtual void MoveIndoorsstop(void);
    virtual void MoveIndoorstick(void);
    virtual void MoveIndoorsappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
