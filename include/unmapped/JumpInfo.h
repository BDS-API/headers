#pragma once



class JumpInfo {

public:
    void getHeight()const;
    void getJumpDelay()const;
    void operator==(JumpInfo const&);
    void setJumpDelay(int);
    void setDistanceScale(float);
    void setHeight(float);
    void operator!=(JumpInfo const&);
    JumpInfo(float, float, int, int);
    void getDistanceScale()const;
    void getAnimDuration()const;
    void setAnimDuration(int);
};
