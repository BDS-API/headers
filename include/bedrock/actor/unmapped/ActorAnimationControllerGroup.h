#pragma once

#include <string>


class ActorAnimationControllerGroup {

public:
    void _getParent(std::string const&); // _ZN29ActorAnimationControllerGroup10_getParentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ActorAnimationControllerGroup(); // _ZN29ActorAnimationControllerGroupC2Ev
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &); // _ZN29ActorAnimationControllerGroup34loadActorAnimationControllersAsyncER19ResourcePackManagerR19ResourceLoadManager
    void loadActorAnimationControllersSync(ResourcePackManager &); // _ZN29ActorAnimationControllerGroup33loadActorAnimationControllersSyncER19ResourcePackManager
    void _buildAnimationControllerFileSchema_v1_8(); // _ZN29ActorAnimationControllerGroup40_buildAnimationControllerFileSchema_v1_8Ev
    void upgrade_v1_8_to_v1_10(Json::Value &); // _ZN29ActorAnimationControllerGroup21upgrade_v1_8_to_v1_10ERN4Json5ValueE
    void _buildAnimationControllerFileSchema_v1_10(); // _ZN29ActorAnimationControllerGroup41_buildAnimationControllerFileSchema_v1_10Ev
//  void _loadActorAnimationController(std::string const&, Core::Path const&, CurrentCmdVersion); //TODO: incomplete function definition // _ZN29ActorAnimationControllerGroup29_loadActorAnimationControllerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathE17CurrentCmdVersion
    void _getActorAnimationControllerLock(); // _ZN29ActorAnimationControllerGroup32_getActorAnimationControllerLockEv
    void clear(); // _ZN29ActorAnimationControllerGroup5clearEv
    void getActorAnimationControllerInfo(HashedString const&); // _ZN29ActorAnimationControllerGroup31getActorAnimationControllerInfoERK12HashedString
    void getActorAnimationController(HashedString const&); // _ZN29ActorAnimationControllerGroup27getActorAnimationControllerERK12HashedString
    void getAnimationControllers()const; // _ZNK29ActorAnimationControllerGroup23getAnimationControllersEv
    ~ActorAnimationControllerGroup(); // _ZN29ActorAnimationControllerGroupD2Ev
};
