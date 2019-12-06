#pragma once

class JumpInfo {

public:

    void JumpInfo(float, float, int, int);
    void getAnimDuration(void)const;
    void setAnimDuration(int);
    void getJumpDelay(void)const;
    void setJumpDelay(int);
    void getDistanceScale(void)const;
    void setDistanceScale(float);
    void getHeight(void)const;
    void setHeight(float);
};
