#pragma once



class StateAnimationVariable {

public:
    StateAnimationVariable(HashedString const&); // _ZN22StateAnimationVariableC2ERK12HashedString
    void addKeyFrame(float, float); // _ZN22StateAnimationVariable11addKeyFrameEff
    void sort(); // _ZN22StateAnimationVariable4sortEv
    void setVariable(RenderParams &)const; // _ZNK22StateAnimationVariable11setVariableER12RenderParams
    void removeVariable(RenderParams &)const; // _ZNK22StateAnimationVariable14removeVariableER12RenderParams
    void toJson(Json::Value &)const; // _ZNK22StateAnimationVariable6toJsonERN4Json5ValueE
    StateAnimationVariable(StateAnimationVariable const&); // _ZN22StateAnimationVariableC2ERKS_
    ~StateAnimationVariable(); // _ZN22StateAnimationVariableD2Ev
};
