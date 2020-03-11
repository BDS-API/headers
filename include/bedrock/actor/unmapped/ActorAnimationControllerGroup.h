#pragma once

#include "../../../core/Path.h"
#include "../../../unmapped/ResourceLoadManager.h"
#include "../../../unmapped/HashedString.h"
#include "../../pack/ResourcePackManager.h"
#include "../../../json/Value.h"
#include <string>


class ActorAnimationControllerGroup {

public:

    void _getParent(std::string const&);
    ActorAnimationControllerGroup();
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationControllersSync(ResourcePackManager &);
    void _buildAnimationControllerFileSchema_v1_8();
    void upgrade_v1_8_to_v1_10(Json::Value &);
    void _buildAnimationControllerFileSchema_v1_10();
//  void _loadActorAnimationController(std::string const&, Core::Path const&, CurrentCmdVersion); //TODO: incomplete function definition
    void _getActorAnimationControllerLock();
    void clear();
    void getActorAnimationControllerInfo(HashedString const&);
    void getActorAnimationController(HashedString const&);
    void getAnimationControllers()const;
    ~ActorAnimationControllerGroup();
};
