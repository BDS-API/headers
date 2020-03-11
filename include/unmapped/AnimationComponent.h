#pragma once

#include "./ExpressionNode.h"
#include "./AnimationComponentID.h"
#include "./AnimationResourceDefinitionMap.h"
#include "./HashedString.h"
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorAnimationControllerStatePlayer.h"
#include <functional>
#include <string>


class AnimationComponent {

public:
    static long mReloadTimeStamp;
    static long mClientFrameIndex;
    static long mServerFrameIndex;


    void getAnimationResourceDefinitionMap()const;
    void getAnimationComponentInitFunction()const;
//  void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void (ActorAnimationPlayer &)>); //TODO: incomplete function definition
    void getRenderParams();
    void initInstanceSpecificAnimationData();
    void setupDeltaTimeAndLifeTimeParams(bool);
//  void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer &)>); //TODO: incomplete function definition
    void applyAnimations(bool);
    void _getCurrentFrameIndex();
    void setDefaultPoses();
    void getAllBoneOrientations();
    void setDirty();
    void getAnimationPlayers();
    void forceNextUpdateToApplyAnimations();
    void ensureClientAnimationComponentIsInitialized();
//  void setDefaultPose(SkeletalHierarchyIndex); //TODO: incomplete function definition
//  void getBoneOrientations(SkeletalHierarchyIndex, bool); //TODO: incomplete function definition
    bool isInitialized();
    void serverUpdate(Actor &);
//  void prepRenderParamsForActor(Actor &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
//  void prepRenderParamsForActorRendering(ActorRenderData &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition
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
//  void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const; //TODO: incomplete function definition
//  void getBoneOrientations(SkeletalHierarchyIndex, bool)const; //TODO: incomplete function definition
    void getLocators();
    void getLocator(HashedString const&);
    void getChildAnimationComponents();
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*);
    void getCurrentAnimationControllerStatePlayer()const;
    void getAllBoneOrientations()const;
    void numSkeletalHierarchies()const;
//  void getAnimationComponent(AnimationComponentGroup, AnimationComponentID); //TODO: incomplete function definition
    void _getAnimationComponentMapLock();
//  void _getAllAnimationComponents(AnimationComponentGroup); //TODO: incomplete function definition
    void incrementCurrentClientFrameIndex();
    void incrementCurrentServerFrameIndex();
//  AnimationComponent(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
    ~AnimationComponent();
//  void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition
};
