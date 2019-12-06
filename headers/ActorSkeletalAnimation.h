#pragma once

class ActorSkeletalAnimation {

public:

    void ActorSkeletalAnimation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addBoneAnimation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getBoneAnimations(void)const;
    void getBoneAnimations(void);
    void getParticleEffectEvents(void)const;
    void getParticleEffectEvents(void);
    void getSoundEffectEvents(void)const;
    void getSoundEffectEvents(void);
    void getEvents(void)const;
    void addParticleEffectEvent(float);
    void addSoundEffectEvent(float);
    void addActorEvent(float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CurrentCmdVersion);
    void setAnimationLength(float);
    void getAnimationLength(void)const;
    void getMaxKeyFrameTime(void)const;
    void calculateAnimationLength(void);
    void sortParticleEffectEvents(void);
    void sortSoundEffectEvents(void);
    void sortEvents(void);
    void initPrecomputedInterpolation(void);
    void toJson(Json::Value &)const;
    void shouldLoop(void)const;
    void setShouldOverridePreviousAnimation(bool);
    void setShouldLoop(bool);
    void shouldOverridePreviousAnimation(void)const;
    void getAnimTime(RenderParams &)const;
    void getBlendWeight(RenderParams &)const;
    void setBlendWeight(ExpressionNode const&);
    void setAnimTimeUpdate(ExpressionNode const&);
};
