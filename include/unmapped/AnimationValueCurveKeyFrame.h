#pragma once



class AnimationValueCurveKeyFrame {

public:
    void operator<(AnimationValueCurveKeyFrame const&)const;
    AnimationValueCurveKeyFrame(float, float);
    void toJson(Json::Value &)const;
};
