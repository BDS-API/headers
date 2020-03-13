#pragma once

#include <string>
#include <functional>
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include "AnimationComponentID.h"


class AnimationComponent {

public:
    class ChildAnimationComponentInfo;

    static long mReloadTimeStamp;
    static long mClientFrameIndex;
    static long mServerFrameIndex;

    void getAnimationResourceDefinitionMap()const; // _ZNK18AnimationComponent33getAnimationResourceDefinitionMapEv
    void getAnimationComponentInitFunction()const; // _ZNK18AnimationComponent33getAnimationComponentInitFunctionEv
    void initializeServerAnimationComponent(Actor &, AnimationResourceDefinitionMap &, std::function<void (ActorAnimationPlayer &)>); // _ZN18AnimationComponent34initializeServerAnimationComponentER5ActorR30AnimationResourceDefinitionMapSt8functionIFvR20ActorAnimationPlayerEE
    void getRenderParams(); // _ZN18AnimationComponent15getRenderParamsEv
    void initInstanceSpecificAnimationData(); // _ZN18AnimationComponent33initInstanceSpecificAnimationDataEv
    void setupDeltaTimeAndLifeTimeParams(bool); // _ZN18AnimationComponent31setupDeltaTimeAndLifeTimeParamsEb
    void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer &)>); // _ZN18AnimationComponent34initializeClientAnimationComponentESt8functionIFvR20ActorAnimationPlayerEE
    void applyAnimations(bool); // _ZN18AnimationComponent15applyAnimationsEb
    void _getCurrentFrameIndex(); // _ZN18AnimationComponent21_getCurrentFrameIndexEv
    void setDefaultPoses(); // _ZN18AnimationComponent15setDefaultPosesEv
    void getAllBoneOrientations(); // _ZN18AnimationComponent22getAllBoneOrientationsEv
    void setDirty(); // _ZN18AnimationComponent8setDirtyEv
    void getAnimationPlayers(); // _ZN18AnimationComponent19getAnimationPlayersEv
    void forceNextUpdateToApplyAnimations(); // _ZN18AnimationComponent32forceNextUpdateToApplyAnimationsEv
    void ensureClientAnimationComponentIsInitialized(); // _ZN18AnimationComponent43ensureClientAnimationComponentIsInitializedEv
//  void setDefaultPose(SkeletalHierarchyIndex); //TODO: incomplete function definition // _ZN18AnimationComponent14setDefaultPoseE22SkeletalHierarchyIndex
//  void getBoneOrientations(SkeletalHierarchyIndex, bool); //TODO: incomplete function definition // _ZN18AnimationComponent19getBoneOrientationsE22SkeletalHierarchyIndexb
    bool isInitialized(); // _ZN18AnimationComponent13isInitializedEv
    void serverUpdate(Actor &); // _ZN18AnimationComponent12serverUpdateER5Actor
//  void prepRenderParamsForActor(Actor &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition // _ZN18AnimationComponent24prepRenderParamsForActorER5ActorP22BaseActorRenderContextP15DataDrivenModelf
//  void prepRenderParamsForActorRendering(ActorRenderData &, BaseActorRenderContext *, DataDrivenModel *, float); //TODO: incomplete function definition // _ZN18AnimationComponent33prepRenderParamsForActorRenderingER15ActorRenderDataP22BaseActorRenderContextP15DataDrivenModelf
    void createAnimationPlayer(HashedString const&, ExpressionNode const&); // _ZN18AnimationComponent21createAnimationPlayerERK12HashedStringRK14ExpressionNode
    void findAnimation(HashedString const&); // _ZN18AnimationComponent13findAnimationERK12HashedString
    void getAnimationControllerPlayer(HashedString const&, bool); // _ZN18AnimationComponent28getAnimationControllerPlayerERK12HashedStringb
    void getAnimationControllerStatePlayer(HashedString const&, HashedString const&, bool); // _ZN18AnimationComponent33getAnimationControllerStatePlayerERK12HashedStringS2_b
    void getRegisteredAnimationLength(std::string const&)const; // _ZNK18AnimationComponent28getRegisteredAnimationLengthERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addAnimationToController(HashedString const&, HashedString const&, std::string const&); // _ZN18AnimationComponent24addAnimationToControllerERK12HashedStringS2_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isAnimationRegistered(HashedString const&)const; // _ZNK18AnimationComponent21isAnimationRegisteredERK12HashedString
    void tryRegisterAnimation(HashedString const&, ActorSkeletalAnimationPtr); // _ZN18AnimationComponent20tryRegisterAnimationERK12HashedString25ActorSkeletalAnimationPtr
    void playAnimation(HashedString const&, float, std::string const&, std::string const&, std::string const&); // _ZN18AnimationComponent13playAnimationERK12HashedStringfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_SA_
    void setSingleAnimationPlayer(ActorAnimationPlayer *); // _ZN18AnimationComponent24setSingleAnimationPlayerEP20ActorAnimationPlayer
    void haveInitializedScriptsRun()const; // _ZNK18AnimationComponent25haveInitializedScriptsRunEv
    void setInitializedScriptsRun(bool); // _ZN18AnimationComponent24setInitializedScriptsRunEb
//  void findBoneMapping(SkeletalHierarchyIndex, HashedString const&)const; //TODO: incomplete function definition // _ZNK18AnimationComponent15findBoneMappingE22SkeletalHierarchyIndexRK12HashedString
//  void getBoneOrientations(SkeletalHierarchyIndex, bool)const; //TODO: incomplete function definition // _ZNK18AnimationComponent19getBoneOrientationsE22SkeletalHierarchyIndexb
    void getLocators(); // _ZN18AnimationComponent11getLocatorsEv
    void getLocator(HashedString const&); // _ZN18AnimationComponent10getLocatorERK12HashedString
    void getChildAnimationComponents(); // _ZN18AnimationComponent27getChildAnimationComponentsEv
    void setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*); // _ZN18AnimationComponent40setCurrentAnimationControllerStatePlayerEPK35ActorAnimationControllerStatePlayer
    void getCurrentAnimationControllerStatePlayer()const; // _ZNK18AnimationComponent40getCurrentAnimationControllerStatePlayerEv
    void getAllBoneOrientations()const; // _ZNK18AnimationComponent22getAllBoneOrientationsEv
    void numSkeletalHierarchies()const; // _ZNK18AnimationComponent22numSkeletalHierarchiesEv
//  void getAnimationComponent(AnimationComponentGroup, AnimationComponentID); //TODO: incomplete function definition // _ZN18AnimationComponent21getAnimationComponentE23AnimationComponentGroup20AnimationComponentID
    void _getAnimationComponentMapLock(); // _ZN18AnimationComponent29_getAnimationComponentMapLockEv
//  void _getAllAnimationComponents(AnimationComponentGroup); //TODO: incomplete function definition // _ZN18AnimationComponent26_getAllAnimationComponentsE23AnimationComponentGroup
    void incrementCurrentClientFrameIndex(); // _ZN18AnimationComponent32incrementCurrentClientFrameIndexEv
    void incrementCurrentServerFrameIndex(); // _ZN18AnimationComponent32incrementCurrentServerFrameIndexEv
//  AnimationComponent(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition // _ZN18AnimationComponentC2E23AnimationComponentGroupRK20AnimationComponentID
    ~AnimationComponent(); // _ZN18AnimationComponentD2Ev
//  void _removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&); //TODO: incomplete function definition // _ZN18AnimationComponent38_removeAnimationComponentFromGlobalMapE23AnimationComponentGroupRK20AnimationComponentID
    class ChildAnimationComponentInfo {

    public:
        void setDirty(); // _ZN18AnimationComponent27ChildAnimationComponentInfo8setDirtyEv
//      void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition // _ZN18AnimationComponent27ChildAnimationComponentInfo21getAnimationComponentER5Actort19AttachableSlotIndex
        ~ChildAnimationComponentInfo(); // _ZN18AnimationComponent27ChildAnimationComponentInfoD2Ev
    };
};
