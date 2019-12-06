#pragma once

class StateAnimationVariable {

public:

    void StateAnimationVariable(HashedString const&);
    void addKeyFrame(float, float);
    void sort(void);
    void setVariable(RenderParams &)const;
    void removeVariable(RenderParams &)const;
    void toJson(Json::Value &)const;
    void StateAnimationVariable(StateAnimationVariable const&);
};
