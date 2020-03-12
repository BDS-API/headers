#pragma once

#include <unordered_map>
#include "ActorSkeletalAnimationPtr.h"
#include "ActorAnimationPlayer.h"


class ActorSkeletalAnimationPlayer : ActorAnimationPlayer {

public:
    virtual void findAnimation(HashedString const&);
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual void getAnimationType()const;
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float);
    ~ActorSkeletalAnimationPlayer();
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void resetAnimation();
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished()const;
    void setBlendWeight(ExpressionNode const&);
    void getRawAnimationName()const;
    void setAnimationDataPtr(ActorSkeletalAnimationPtr &);
    void getAnimationData()const;
    void _fireEvents(RenderParams &, Actor &)const;
    ActorSkeletalAnimationPlayer(HashedString const&, ActorSkeletalAnimationPtr, AnimationComponent &, ExpressionNode const&);
    void _fireSoundEvents(RenderParams &);
    void _fireParticleEvents(RenderParams &);
    bool isValid()const;
};
