#pragma once



class DirtyTicksCounter {

public:
    void touch();
    void max();
    void getTotalDirtyTicks()const;
    DirtyTicksCounter();
    bool isDirty()const;
    void reset();
    void getTicksSinceLastChange()const;
};
