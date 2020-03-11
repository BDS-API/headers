#pragma once

#include "./StateAnimationVariable.h"
#include "./RenderParams.h"
#include "./HashedString.h"
#include "../json/Value.h"


class StateAnimationVariable {

public:

    StateAnimationVariable(HashedString const&);
    void addKeyFrame(float, float);
    void sort();
    void setVariable(RenderParams &)const;
    void removeVariable(RenderParams &)const;
    void toJson(Json::Value &)const;
    StateAnimationVariable(StateAnimationVariable const&);
    ~StateAnimationVariable();
};
