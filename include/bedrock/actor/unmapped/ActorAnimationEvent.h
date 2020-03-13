#pragma once

#include <string>


class ActorAnimationEvent {

public:
    void fire(RenderParams &, Actor &)const; // _ZNK19ActorAnimationEvent4fireER12RenderParamsR5Actor
    void operator<(ActorAnimationEvent const&)const; // _ZNK19ActorAnimationEventltERKS_
//  ActorAnimationEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition // _ZN19ActorAnimationEventC2EfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE17CurrentCmdVersion
    void toJson(Json::Value &)const; // _ZNK19ActorAnimationEvent6toJsonERN4Json5ValueE
    ~ActorAnimationEvent(); // _ZN19ActorAnimationEventD2Ev
    ActorAnimationEvent(ActorAnimationEvent const&); // _ZN19ActorAnimationEventC2ERKS_
    ActorAnimationEvent(ActorAnimationEvent &&); // _ZN19ActorAnimationEventC2EOS_
};
