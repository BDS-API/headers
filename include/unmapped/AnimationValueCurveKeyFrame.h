#pragma once

#include "../json/Value.h"


class AnimationValueCurveKeyFrame {

public:
    AnimationValueCurveKeyFrame(float, float);
    void operator<(AnimationValueCurveKeyFrame const&)const;
    void toJson(Json::Value &)const;
};
