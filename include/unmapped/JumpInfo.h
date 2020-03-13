#pragma once



class JumpInfo {

public:
    JumpInfo(float, float, int, int); // _ZN8JumpInfoC2Effii
    void operator==(JumpInfo const&); // _ZN8JumpInfoeqERKS_
    void operator!=(JumpInfo const&); // _ZN8JumpInfoneERKS_
    void getAnimDuration()const; // _ZNK8JumpInfo15getAnimDurationEv
    void setAnimDuration(int); // _ZN8JumpInfo15setAnimDurationEi
    void getJumpDelay()const; // _ZNK8JumpInfo12getJumpDelayEv
    void setJumpDelay(int); // _ZN8JumpInfo12setJumpDelayEi
    void getDistanceScale()const; // _ZNK8JumpInfo16getDistanceScaleEv
    void setDistanceScale(float); // _ZN8JumpInfo16setDistanceScaleEf
    void getHeight()const; // _ZNK8JumpInfo9getHeightEv
    void setHeight(float); // _ZN8JumpInfo9setHeightEf
};
