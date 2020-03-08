#pragma once



class JumpInfo {

public:

    JumpInfo(float, float, int, int);
    void getAnimDuration()const;
    void setAnimDuration(int);
    void getJumpDelay()const;
    void setJumpDelay(int);
    void getDistanceScale()const;
    void setDistanceScale(float);
    void getHeight()const;
    void setHeight(float);
};
