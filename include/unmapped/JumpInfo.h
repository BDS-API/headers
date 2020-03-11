#pragma once

#include "./JumpInfo.h"


class JumpInfo {

public:

    JumpInfo(float, float, int, int);
    void operator==(JumpInfo const&);
    void operator!=(JumpInfo const&);
    void getAnimDuration()const;
    void setAnimDuration(int);
    void getJumpDelay()const;
    void setJumpDelay(int);
    void getDistanceScale()const;
    void setDistanceScale(float);
    void getHeight()const;
    void setHeight(float);
};
