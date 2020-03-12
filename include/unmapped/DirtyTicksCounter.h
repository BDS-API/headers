#pragma once



class DirtyTicksCounter {

public:
    void touch();
    void getTotalDirtyTicks()const;
    DirtyTicksCounter();
    void max();
    bool isDirty()const;
    void getTicksSinceLastChange()const;
    void reset();
};
