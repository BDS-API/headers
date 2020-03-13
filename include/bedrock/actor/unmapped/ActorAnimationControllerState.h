#pragma once

#include <string>


class ActorAnimationControllerState {

public:
    void addVariable(std::string const&); // _ZN29ActorAnimationControllerState11addVariableERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setVariables(RenderParams &)const; // _ZNK29ActorAnimationControllerState12setVariablesER12RenderParams
    void removeVariables(RenderParams &)const; // _ZNK29ActorAnimationControllerState15removeVariablesER12RenderParams
    void addBlendTransitionKeyFrame(float, float); // _ZN29ActorAnimationControllerState26addBlendTransitionKeyFrameEff
    void setBlendTransitionTime(float); // _ZN29ActorAnimationControllerState22setBlendTransitionTimeEf
    ActorAnimationControllerState(HashedString const&); // _ZN29ActorAnimationControllerStateC2ERK12HashedString
    void addAnimation(HashedString const&); // _ZN29ActorAnimationControllerState12addAnimationERK12HashedString
    void addAnimation(HashedString const&, ExpressionNode const&); // _ZN29ActorAnimationControllerState12addAnimationERK12HashedStringRK14ExpressionNode
    void addTransition(std::string const&, std::string const&, bool); // _ZN29ActorAnimationControllerState13addTransitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    void getNextState(RenderParams &)const; // _ZNK29ActorAnimationControllerState12getNextStateER12RenderParams
    void addParticleEffect(); // _ZN29ActorAnimationControllerState17addParticleEffectEv
    void addSoundEffect(); // _ZN29ActorAnimationControllerState14addSoundEffectEv
//  void addEntryActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition // _ZN29ActorAnimationControllerState18addEntryActorEventEfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE17CurrentCmdVersion
//  void addExitActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition // _ZN29ActorAnimationControllerState17addExitActorEventEfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE17CurrentCmdVersion
    void toJson(Json::Value &, ActorAnimationController const&)const; // _ZNK29ActorAnimationControllerState6toJsonERN4Json5ValueERK24ActorAnimationController
    ~ActorAnimationControllerState(); // _ZN29ActorAnimationControllerStateD2Ev
};
