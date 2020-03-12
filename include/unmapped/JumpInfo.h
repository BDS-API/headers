#pragma once



class JumpInfo {

public:
    void setJumpDelay(int);
    void operator!=(JumpInfo const&);
    void getDistanceScale()const;
    void setAnimDuration(int);
    void setHeight(float);
    void operator==(JumpInfo const&);
    void getJumpDelay()const;
    void getHeight()const;
    void getAnimDuration()const;
    void setDistanceScale(float);
    JumpInfo(float, float, int, int);
};
