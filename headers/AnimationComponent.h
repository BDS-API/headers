#pragma once

class AnimationComponent {

public:
    static long mReloadTimeStamp;


    void getAnimationResourceDefinitionMap(void)const;
    void getAnimationComponentInitFunction(void)const;
    void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void ()(ActorAnimationPlayer &)>);
    void getRenderParams(void);
    void initInstanceSpecificAnimationData(void);
    void setupDeltaTimeAndLifeTimeParams(bool);
    void initializeClientAnimationComponent(std::function<void ()(ActorAnimationPlayer &)>);
    void applyAnimations(bool);
    void getCurrentFrameIndex(void);
    void setDefaultPoses(void);
    void getAllBoneOrientations(void);
    void setDirty(void);
    void getAnimationPlayers(void);
    void forceNextUpdateToApplyAnimations(void);
    void ensureClientAnimationComponentIsInitialized(void);
    void setDefaultPose(SkeletalHierarchyIndex);
    void getBoneOrientations(SkeletalHierarchyIndex, bool);
    bool isInitialized(void);
    void serverUpdate(Actor &);
    void prepRenderParamsForActor(Actor &, BaseActorRenderContext *, DataDrivenModel *, float);
    void prepRenderParamsForActorRendering(ActorRenderData &, BaseActorRenderContext *, DataDrivenModel *, float);
    void createAnimationPlayer(HashedString const&, ExpressionNode const&);
    void findAnimation(HashedString const&);
    void getAnimationControllerPlayer(HashedString const&, bool);
    void getAnimationControllerStatePlayer(HashedString const&, HashedString const&, bool);
    void getRegisteredAnimationLength(std::string const&)const;
    void addAnimationToController(HashedString const&, HashedString const&, std::string const&);
    bool isAnimationRegistered(HashedString const&)const;
    void tryRegisterAnimation(HashedString const&, ActorSkeletalAnimationPtr);
    void playAnimation(HashedString const&, float, std::string const&, std::string const&, std::string const&);
    void setSingleAnimationPlayer(ActorAnimationPlayer *);
    void haveInitializedScriptsRun(void)const;
    void setInitializedScriptsRun(bool);
    void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const;
    void getBoneOrientations(SkeletalHierarchyIndex, bool)const;
    void getLocators(void);
    void getLocator(HashedString const&);
    void getChildAnimationComponents(void);
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*);
    void getCurrentAnimationControllerStatePlayer(void)const;
    void getAllBoneOrientations(void)const;
    void numSkeletalHierarchies(void)const;
    void getAnimationComponent(AnimationComponentGroup, AnimationComponentID);
    void _getAnimationComponentMapLock(void);
    void _getAllAnimationComponents(AnimationComponentGroup);
    void AnimationComponent(AnimationComponentGroup, AnimationComponentID const&);
    void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&);
};
