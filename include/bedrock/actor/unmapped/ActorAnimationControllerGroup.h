#pragma once

#include <string>


class ActorAnimationControllerGroup {

public:
    void clear();
    void _getActorAnimationControllerLock();
    void getActorAnimationControllerInfo(HashedString const&);
    void _getParent(std::string const&);
    void _buildAnimationControllerFileSchema_v1_8();
    void upgrade_v1_8_to_v1_10(Json::Value &);
    void getActorAnimationController(HashedString const&);
    ActorAnimationControllerGroup();
    void getAnimationControllers()const;
//  void _loadActorAnimationController(std::string const&, Core::Path const&, CurrentCmdVersion); //TODO: incomplete function definition
    ~ActorAnimationControllerGroup();
    void loadActorAnimationControllersSync(ResourcePackManager &);
    void _buildAnimationControllerFileSchema_v1_10();
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &);
};
