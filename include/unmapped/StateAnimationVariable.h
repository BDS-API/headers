#pragma once

#include "HashedString.h"
#include "RenderParams.h"
#include "../json/Value.h"


class StateAnimationVariable {

public:
    void addKeyFrame(float, float);
    ~StateAnimationVariable();
    void toJson(Json::Value &)const;
    StateAnimationVariable(StateAnimationVariable const&);
    void sort();
    void setVariable(RenderParams &)const;
    void removeVariable(RenderParams &)const;
    StateAnimationVariable(HashedString const&);
};
