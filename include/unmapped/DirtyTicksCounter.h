#pragma once



class DirtyTicksCounter {

public:

    void max();
    DirtyTicksCounter();
    void reset();
    void touch();
    void getTicksSinceLastChange()const;
    void getTotalDirtyTicks()const;
    bool isDirty()const;
};
