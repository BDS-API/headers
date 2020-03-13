#pragma once



class AnimationValueCurveKeyFrame {

public:
    void toJson(Json::Value &)const; // _ZNK27AnimationValueCurveKeyFrame6toJsonERN4Json5ValueE
    AnimationValueCurveKeyFrame(float, float); // _ZN27AnimationValueCurveKeyFrameC2Eff
    void operator<(AnimationValueCurveKeyFrame const&)const; // _ZNK27AnimationValueCurveKeyFrameltERKS_
};
