#pragma once

#include "ExpressionNode.h"
#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"
#include <string>
#include "AnimationComponentID.h"
#include <functional>
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include "../bedrock/actor/Actor.h"
#include "HashedString.h"
#include "AnimationResourceDefinitionMap.h"
#include "../bedrock/actor/unmapped/ActorAnimationControllerStatePlayer.h"


class AnimationComponent {

public:
    class ChildAnimationComponentInfo;

    static long mReloadTimeStamp;
    static long mClientFrameIndex;
    static long mServerFrameIndex;

    void getRenderParams();
//  void getAnimationComponent(AnimationComponentGroup, AnimationComponentID); //TODO: incomplete function definition
    bool isInitialized();
    void getRegisteredAnimationLength(std::string const&)const;
    void applyAnimations(bool);
//  void _getAllAnimationComponents(AnimationComponentGroup); //TODO: incomplete function definition
    void getAnimationPlayers();
    void initInstanceSpecificAnimationData();
//  void prepRenderParamsForActor(Actor &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
    void getAnimationControllerStatePlayer(HashedString const&, HashedString const&, bool);
    void incrementCurrentServerFrameIndex();
    void setupDeltaTimeAndLifeTimeParams(bool);
    void addAnimationToController(HashedString const&, HashedString const&, std::string const&);
    void serverUpdate(Actor &);
//  AnimationComponent(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
    void forceNextUpdateToApplyAnimations();
    void findAnimation(HashedString const&);
    void getAnimationComponentInitFunction()const;
//  void getBoneOrientations(SkeletalHierarchyIndex, bool); //TODO: incomplete function definition
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*);
    void setDirty();
    bool isAnimationRegistered(HashedString const&)const;
    void createAnimationPlayer(HashedString const&, ExpressionNode const&);
    void getAllBoneOrientations()const;
//  void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
    void getLocators();
    void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer &)>);
    void haveInitializedScriptsRun()const;
    void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void (ActorAnimationPlayer &)>);
    void getChildAnimationComponents();
    void ensureClientAnimationComponentIsInitialized();
    void numSkeletalHierarchies()const;
    void getAnimationControllerPlayer(HashedString const&, bool);
    ~AnimationComponent();
//  void setDefaultPose(SkeletalHierarchyIndex); //TODO: incomplete function definition
    void getAnimationResourceDefinitionMap()const;
    void setInitializedScriptsRun(bool);
    void getLocator(HashedString const&);
    void tryRegisterAnimation(HashedString const&, ActorSkeletalAnimationPtr);
//  void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const; //TODO: incomplete function definition
//  void getBoneOrientations(SkeletalHierarchyIndex, bool)const; //TODO: incomplete function definition
//  void prepRenderParamsForActorRendering(ActorRenderData &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
    void setSingleAnimationPlayer(ActorAnimationPlayer *);
    void _getCurrentFrameIndex();
    void getCurrentAnimationControllerStatePlayer()const;
    void setDefaultPoses();
    void incrementCurrentClientFrameIndex();
    void getAllBoneOrientations();
    void _getAnimationComponentMapLock();
    void playAnimation(HashedString const&, float, std::string const&, std::string const&, std::string const&);
    class ChildAnimationComponentInfo {

    public:
        ~ChildAnimationComponentInfo();
        void setDirty();
//      void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    };
};
