#pragma once

#include <string>


class ActorSkeletalAnimation {

public:
    ActorSkeletalAnimation(std::string const&, bool, std::string const&); // _ZN22ActorSkeletalAnimationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbS7_
    void addBoneAnimation(std::string const&); // _ZN22ActorSkeletalAnimation16addBoneAnimationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBoneAnimations()const; // _ZNK22ActorSkeletalAnimation17getBoneAnimationsEv
    void getBoneAnimations(); // _ZN22ActorSkeletalAnimation17getBoneAnimationsEv
    void getParticleEffectEvents()const; // _ZNK22ActorSkeletalAnimation23getParticleEffectEventsEv
    void getParticleEffectEvents(); // _ZN22ActorSkeletalAnimation23getParticleEffectEventsEv
    void getSoundEffectEvents()const; // _ZNK22ActorSkeletalAnimation20getSoundEffectEventsEv
    void getSoundEffectEvents(); // _ZN22ActorSkeletalAnimation20getSoundEffectEventsEv
    void getEvents()const; // _ZNK22ActorSkeletalAnimation9getEventsEv
    void addParticleEffectEvent(float); // _ZN22ActorSkeletalAnimation22addParticleEffectEventEf
    void addSoundEffectEvent(float); // _ZN22ActorSkeletalAnimation19addSoundEffectEventEf
//  void addActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition // _ZN22ActorSkeletalAnimation13addActorEventEfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE17CurrentCmdVersion
    void setAnimationLength(float); // _ZN22ActorSkeletalAnimation18setAnimationLengthEf
    void getAnimationLength()const; // _ZNK22ActorSkeletalAnimation18getAnimationLengthEv
    void getMaxKeyFrameTime()const; // _ZNK22ActorSkeletalAnimation18getMaxKeyFrameTimeEv
    void calculateAnimationLength(); // _ZN22ActorSkeletalAnimation24calculateAnimationLengthEv
    void sortParticleEffectEvents(); // _ZN22ActorSkeletalAnimation24sortParticleEffectEventsEv
    void sortSoundEffectEvents(); // _ZN22ActorSkeletalAnimation21sortSoundEffectEventsEv
    void sortEvents(); // _ZN22ActorSkeletalAnimation10sortEventsEv
    void initPrecomputedInterpolation(); // _ZN22ActorSkeletalAnimation28initPrecomputedInterpolationEv
    void toJson(Json::Value &)const; // _ZNK22ActorSkeletalAnimation6toJsonERN4Json5ValueE
    void shouldLoop()const; // _ZNK22ActorSkeletalAnimation10shouldLoopEv
    void setShouldOverridePreviousAnimation(bool); // _ZN22ActorSkeletalAnimation34setShouldOverridePreviousAnimationEb
    void setShouldLoop(bool); // _ZN22ActorSkeletalAnimation13setShouldLoopEb
    void shouldOverridePreviousAnimation()const; // _ZNK22ActorSkeletalAnimation31shouldOverridePreviousAnimationEv
    void getAnimTime(RenderParams &)const; // _ZNK22ActorSkeletalAnimation11getAnimTimeER12RenderParams
    void getBlendWeight(RenderParams &)const; // _ZNK22ActorSkeletalAnimation14getBlendWeightER12RenderParams
    void setBlendWeight(ExpressionNode const&); // _ZN22ActorSkeletalAnimation14setBlendWeightERK14ExpressionNode
    void setAnimTimeUpdate(ExpressionNode const&); // _ZN22ActorSkeletalAnimation17setAnimTimeUpdateERK14ExpressionNode
    std::string getSourceFilePathWithExtension()const; // _ZNK22ActorSkeletalAnimation30getSourceFilePathWithExtensionB5cxx11Ev
    ~ActorSkeletalAnimation(); // _ZN22ActorSkeletalAnimationD2Ev
};
