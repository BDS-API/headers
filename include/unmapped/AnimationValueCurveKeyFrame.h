#pragma once

#include "./AnimationValueCurveKeyFrame.h"
#include "../json/Value.h"


class AnimationValueCurveKeyFrame {

public:

    void toJson(Json::Value &)const;
    AnimationValueCurveKeyFrame(float, float);
    void operator<(AnimationValueCurveKeyFrame const&)const;
};
