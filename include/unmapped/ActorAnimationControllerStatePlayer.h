#pragma once

class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

public:
    virtual ActorAnimationControllerStatePlayer::~ActorAnimationControllerStatePlayer();
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation(void);
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished(void)const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType(void)const;

    void preApplyToPose(RenderParams &)const;
    void postApplyToPose(RenderParams &)const;
    void anyAnimationsFinished(void)const;
    void allAnimationsFinished(void)const;
    void blendViaShortestPath(void)const;
    void getBlendTransitionKeyFrames(void)const;
    void calculateBlendTransitionWeight(float)const;
    ActorAnimationControllerStatePlayer(HashedString const&, ActorAnimationControllerPlayer &, std::shared_ptr<ActorAnimationControllerState>, AnimationComponent &, ExpressionNode const&);
    void addAnimation(AnimationComponent &, HashedString const&, ActorSkeletalAnimationPtr);
    void addTransition(std::string const&, std::string const&, bool);
};
