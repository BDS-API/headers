#pragma once

#include <string>


class ActorAnimationGroup {

public:
    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &); // _ZN19ActorAnimationGroup24loadActorAnimationsAsyncER19ResourcePackManagerR19ResourceLoadManager
    void loadActorAnimationsSync(ResourcePackManager &); // _ZN19ActorAnimationGroup23loadActorAnimationsSyncER19ResourcePackManager
    void setExperimental(bool); // _ZN19ActorAnimationGroup15setExperimentalEb
    void _buildAnimationFileSchema_v1_8(bool); // _ZN19ActorAnimationGroup30_buildAnimationFileSchema_v1_8Eb
//  void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool); //TODO: incomplete function definition // _ZN19ActorAnimationGroup18loadActorAnimationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathER9PackStats17CurrentCmdVersionb
    void clear(); // _ZN19ActorAnimationGroup5clearEv
    void getActorAnimationInfo(HashedString const&); // _ZN19ActorAnimationGroup21getActorAnimationInfoERK12HashedString
    void getActorAnimation(HashedString const&); // _ZN19ActorAnimationGroup17getActorAnimationERK12HashedString
    void getAnimations()const; // _ZNK19ActorAnimationGroup13getAnimationsEv
    ~ActorAnimationGroup(); // _ZN19ActorAnimationGroupD2Ev
    ActorAnimationGroup(); // _ZN19ActorAnimationGroupC2Ev
};
