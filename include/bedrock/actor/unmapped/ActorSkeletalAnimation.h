#pragma once

#include <string>


class ActorSkeletalAnimation {

public:
    void toJson(Json::Value &)const;
    void getAnimTime(RenderParams &)const;
    void shouldOverridePreviousAnimation()const;
    void calculateAnimationLength();
    void setShouldLoop(bool);
    void getParticleEffectEvents()const;
    void sortEvents();
//  void addActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void setShouldOverridePreviousAnimation(bool);
    void shouldLoop()const;
    void getMaxKeyFrameTime()const;
    void getAnimationLength()const;
    void getBoneAnimations();
    void getParticleEffectEvents();
    void initPrecomputedInterpolation();
    void getSoundEffectEvents()const;
    void getEvents()const;
    std::string getSourceFilePathWithExtension()const;
    ~ActorSkeletalAnimation();
    void sortParticleEffectEvents();
    void setAnimationLength(float);
    void setBlendWeight(ExpressionNode const&);
    void getSoundEffectEvents();
    void sortSoundEffectEvents();
    ActorSkeletalAnimation(std::string const&, bool, std::string const&);
    void addSoundEffectEvent(float);
    void addParticleEffectEvent(float);
    void getBlendWeight(RenderParams &)const;
    void addBoneAnimation(std::string const&);
    void setAnimTimeUpdate(ExpressionNode const&);
    void getBoneAnimations()const;
};
