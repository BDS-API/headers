#pragma once

#include "../json/Value"


class StateAnimationVariable {

public:

    StateAnimationVariable(HashedString const&);
    void addKeyFrame(float, float);
    void sort();
    void setVariable(RenderParams &)const;
    void removeVariable(RenderParams &)const;
    void toJson(Json::Value &)const;
    StateAnimationVariable(StateAnimationVariable const&);
};
