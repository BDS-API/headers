#pragma once

#include "../../../unmapped/RenderParams"
#include "../../../unmapped/ExpressionNode"
#include "../../../json/Value"


class ActorSkeletalAnimation {

public:

    ActorSkeletalAnimation(std::string const&, bool, std::string const&);
    void addBoneAnimation(std::string const&);
    void getBoneAnimations()const;
    void getBoneAnimations();
    void getParticleEffectEvents()const;
    void getParticleEffectEvents();
    void getSoundEffectEvents()const;
    void getSoundEffectEvents();
    void getEvents()const;
    void addParticleEffectEvent(float);
    void addSoundEffectEvent(float);
    void addActorEvent(float, std::string const&, CurrentCmdVersion);
    void setAnimationLength(float);
    void getAnimationLength()const;
    void getMaxKeyFrameTime()const;
    void calculateAnimationLength();
    void sortParticleEffectEvents();
    void sortSoundEffectEvents();
    void sortEvents();
    void initPrecomputedInterpolation();
    void toJson(Json::Value &)const;
    void shouldLoop()const;
    void setShouldOverridePreviousAnimation(bool);
    void setShouldLoop(bool);
    void shouldOverridePreviousAnimation()const;
    void getAnimTime(RenderParams &)const;
    void getBlendWeight(RenderParams &)const;
    void setBlendWeight(ExpressionNode const&);
    void setAnimTimeUpdate(ExpressionNode const&);
};
