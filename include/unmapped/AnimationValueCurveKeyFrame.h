#pragma once

class AnimationValueCurveKeyFrame {

public:

    void toJson(Json::Value &)const;
    AnimationValueCurveKeyFrame(float, float);
};
