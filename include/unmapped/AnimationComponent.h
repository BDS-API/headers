#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr"
#include "../bedrock/actor/unmapped/ActorAnimationControllerStatePlayer"
#include "../bedrock/actor/unmapped/ActorAnimationPlayer"


class AnimationComponent {

public:
    static long mReloadTimeStamp;
    static long mClientFrameIndex;
    static long mServerFrameIndex;


    void getAnimationResourceDefinitionMap()const;
    void getAnimationComponentInitFunction()const;
    void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void ()(ActorAnimationPlayer &)>);
    void getRenderParams();
    void initInstanceSpecificAnimationData();
    void setupDeltaTimeAndLifeTimeParams(bool);
    void initializeClientAnimationComponent(std::function<void ()(ActorAnimationPlayer &)>);
    void applyAnimations(bool);
    void _getCurrentFrameIndex();
    void setDefaultPoses();
    void getAllBoneOrientations();
    void setDirty();
    void getAnimationPlayers();
    void forceNextUpdateToApplyAnimations();
    void ensureClientAnimationComponentIsInitialized();
    void setDefaultPose(SkeletalHierarchyIndex);
    void getBoneOrientations(SkeletalHierarchyIndex, bool);
    bool isInitialized();
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
    void haveInitializedScriptsRun()const;
    void setInitializedScriptsRun(bool);
    void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const;
    void getBoneOrientations(SkeletalHierarchyIndex, bool)const;
    void getLocators();
    void getLocator(HashedString const&);
    void getChildAnimationComponents();
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*);
    void getCurrentAnimationControllerStatePlayer()const;
    void getAllBoneOrientations()const;
    void numSkeletalHierarchies()const;
    void getAnimationComponent(AnimationComponentGroup, AnimationComponentID);
    void _getAnimationComponentMapLock();
    void _getAllAnimationComponents(AnimationComponentGroup);
    void incrementCurrentClientFrameIndex();
    void incrementCurrentServerFrameIndex();
    AnimationComponent(AnimationComponentGroup, AnimationComponentID const&);
    void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&);
};
