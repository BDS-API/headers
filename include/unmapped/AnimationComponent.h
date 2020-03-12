#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include "AnimationComponentID.h"
#include <functional>


class AnimationComponent {

public:
    class ChildAnimationComponentInfo;

    static long mReloadTimeStamp;
    static long mClientFrameIndex;
    static long mServerFrameIndex;

    void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer &)>);
    void setDefaultPoses();
    void tryRegisterAnimation(HashedString const&, ActorSkeletalAnimationPtr);
    void initInstanceSpecificAnimationData();
    void getAnimationControllerPlayer(HashedString const&, bool);
    void getCurrentAnimationControllerStatePlayer()const;
    void incrementCurrentClientFrameIndex();
    void playAnimation(HashedString const&, float, std::string const&, std::string const&, std::string const&);
//  void getBoneOrientations(SkeletalHierarchyIndex, bool); //TODO: incomplete function definition
//  void prepRenderParamsForActorRendering(ActorRenderData &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
    void getLocators();
    void getRenderParams();
    bool isInitialized();
    bool isAnimationRegistered(HashedString const&)const;
    void getAnimationPlayers();
    void incrementCurrentServerFrameIndex();
    void ensureClientAnimationComponentIsInitialized();
    void createAnimationPlayer(HashedString const&, ExpressionNode const&);
//  void _getAllAnimationComponents(AnimationComponentGroup); //TODO: incomplete function definition
    void forceNextUpdateToApplyAnimations();
    void getAllBoneOrientations();
    void getAnimationResourceDefinitionMap()const;
    void setSingleAnimationPlayer(ActorAnimationPlayer *);
    void getAllBoneOrientations()const;
    void getChildAnimationComponents();
//  void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
    void getLocator(HashedString const&);
    void numSkeletalHierarchies()const;
    void setInitializedScriptsRun(bool);
//  void getAnimationComponent(AnimationComponentGroup, AnimationComponentID); //TODO: incomplete function definition
//  void prepRenderParamsForActor(Actor &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
    void addAnimationToController(HashedString const&, HashedString const&, std::string const&);
//  void setDefaultPose(SkeletalHierarchyIndex); //TODO: incomplete function definition
//  AnimationComponent(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
    void serverUpdate(Actor &);
//  void getBoneOrientations(SkeletalHierarchyIndex, bool)const; //TODO: incomplete function definition
//  void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const; //TODO: incomplete function definition
    void _getAnimationComponentMapLock();
    void _getCurrentFrameIndex();
    void getAnimationControllerStatePlayer(HashedString const&, HashedString const&, bool);
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*);
    void getRegisteredAnimationLength(std::string const&)const;
    void applyAnimations(bool);
    void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void (ActorAnimationPlayer &)>);
    void haveInitializedScriptsRun()const;
    void findAnimation(HashedString const&);
    void getAnimationComponentInitFunction()const;
    void setDirty();
    ~AnimationComponent();
    void setupDeltaTimeAndLifeTimeParams(bool);
    class ChildAnimationComponentInfo {

    public:
        void setDirty();
        ~ChildAnimationComponentInfo();
//      void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    };
};
