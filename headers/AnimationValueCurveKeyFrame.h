#pragma once

class AnimationValueCurveKeyFrame {

public:

    void toJson(Json::Value &)const;
    void AnimationValueCurveKeyFrame(float, float);
};
