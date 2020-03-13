#pragma once

#include <string>


class ActorAnimationControllerStateTransition {

public:
    ActorAnimationControllerStateTransition(std::string const&, std::string const&); // _ZN39ActorAnimationControllerStateTransitionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void shouldTransition(RenderParams &)const; // _ZNK39ActorAnimationControllerStateTransition16shouldTransitionER12RenderParams
    void toJson(Json::Value &)const; // _ZNK39ActorAnimationControllerStateTransition6toJsonERN4Json5ValueE
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&); // _ZN39ActorAnimationControllerStateTransitionC2ERKS_
    ~ActorAnimationControllerStateTransition(); // _ZN39ActorAnimationControllerStateTransitionD2Ev
};
