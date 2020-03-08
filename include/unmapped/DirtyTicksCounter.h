#pragma once



class DirtyTicksCounter {

public:

    void max(void);
    DirtyTicksCounter(void);
    void reset(void);
    void touch(void);
    void getTicksSinceLastChange(void)const;
    void getTotalDirtyTicks(void)const;
    bool isDirty(void)const;
};
