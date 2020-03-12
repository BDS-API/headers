#pragma once

#include "../../../json/Value.h"
#include "../../../unmapped/RenderParams.h"
#include <string>
#include "../../../unmapped/ExpressionNode.h"


class ActorSkeletalAnimation {

public:
    void getSoundEffectEvents();
    void getEvents()const;
    void setAnimationLength(float);
    void getAnimationLength()const;
    std::string getSourceFilePathWithExtension()const;
    void shouldLoop()const;
//  void addActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void setAnimTimeUpdate(ExpressionNode const&);
    void getSoundEffectEvents()const;
    void calculateAnimationLength();
    void getMaxKeyFrameTime()const;
    void sortParticleEffectEvents();
    void initPrecomputedInterpolation();
    void getBlendWeight(RenderParams &)const;
    void sortEvents();
    void getBoneAnimations();
    void getParticleEffectEvents();
    ActorSkeletalAnimation(std::string const&, bool, std::string const&);
    void setShouldLoop(bool);
    void addSoundEffectEvent(float);
    void getParticleEffectEvents()const;
    void addParticleEffectEvent(float);
    void getBoneAnimations()const;
    void sortSoundEffectEvents();
    void setBlendWeight(ExpressionNode const&);
    ~ActorSkeletalAnimation();
    void getAnimTime(RenderParams &)const;
    void setShouldOverridePreviousAnimation(bool);
    void shouldOverridePreviousAnimation()const;
    void toJson(Json::Value &)const;
    void addBoneAnimation(std::string const&);
};
