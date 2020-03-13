#pragma once

#include <string>


class ActorAnimationController {

public:
    ~ActorAnimationController(); // _ZN24ActorAnimationControllerD2Ev
    void addState(HashedString const&); // _ZN24ActorAnimationController8addStateERK12HashedString
    ActorAnimationController(HashedString const&, std::string const&); // _ZN24ActorAnimationControllerC2ERK12HashedStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void resolveTransitionStateIndices(); // _ZN24ActorAnimationController29resolveTransitionStateIndicesEv
    void findStateIndex(std::string const&, bool, unsigned long)const; // _ZNK24ActorAnimationController14findStateIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbm
    void updateActiveParticleState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const; // _ZNK24ActorAnimationController25updateActiveParticleStateER12RenderParamsiiR30ActorAnimationControllerPlayer
    void updateActiveSoundEffectState(RenderParams &, int, int, ActorAnimationControllerPlayer &)const; // _ZNK24ActorAnimationController28updateActiveSoundEffectStateER12RenderParamsiiR30ActorAnimationControllerPlayer
    void fireEvents(RenderParams &, ActorAnimationControllerPlayer &)const; // _ZNK24ActorAnimationController10fireEventsER12RenderParamsR30ActorAnimationControllerPlayer
    std::string getSourceFilePathWithExtension()const; // _ZNK24ActorAnimationController30getSourceFilePathWithExtensionB5cxx11Ev
    void toJson(Json::Value &)const; // _ZNK24ActorAnimationController6toJsonERN4Json5ValueE
    void findState(std::string const&, bool, unsigned long); // _ZN24ActorAnimationController9findStateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbm
};
