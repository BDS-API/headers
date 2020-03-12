#pragma once



class StateAnimationVariable {

public:
    StateAnimationVariable(StateAnimationVariable const&);
    StateAnimationVariable(HashedString const&);
    void toJson(Json::Value &)const;
    void sort();
    ~StateAnimationVariable();
    void setVariable(RenderParams &)const;
    void addKeyFrame(float, float);
    void removeVariable(RenderParams &)const;
};
