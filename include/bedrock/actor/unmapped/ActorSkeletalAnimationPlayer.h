#pragma once

#include "../../../unmapped/StringKey"
#include "../../../unmapped/AnimationComponent"
#include "../../../unmapped/HashedString"
#include "../../../unmapped/BoneOrientation"
#include "../../../unmapped/RenderParams"
#include "../../../unmapped/ExpressionNode"
#include "../Actor"


class ActorSkeletalAnimationPlayer : ActorAnimationPlayer {

public:
    virtual ActorSkeletalAnimationPlayer::~ActorSkeletalAnimationPlayer()
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation();
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    ActorSkeletalAnimationPlayer(HashedString const&, ActorSkeletalAnimationPtr, AnimationComponent &, ExpressionNode const&);
    void _fireParticleEvents(RenderParams &);
    void _fireSoundEvents(RenderParams &);
    void _fireEvents(RenderParams &, Actor &)const;
    void setBlendWeight(ExpressionNode const&);
    bool isValid()const;
    void getRawAnimationName()const;
    void setAnimationDataPtr(ActorSkeletalAnimationPtr &);
    void getAnimationData()const;
};
