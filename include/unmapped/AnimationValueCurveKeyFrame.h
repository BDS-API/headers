#pragma once

#include "../json/Value"


class AnimationValueCurveKeyFrame {

public:

    void toJson(Json::Value &)const;
    AnimationValueCurveKeyFrame(float, float);
};
