#pragma once

#include "../../pack/ResourcePackManager.h"
#include <string>
#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/ResourceLoadManager.h"
#include "../../../json/Value.h"
#include "../../../core/Path.h"


class ActorAnimationControllerGroup {

public:
    void _getActorAnimationControllerLock();
    void clear();
    void upgrade_v1_8_to_v1_10(Json::Value &);
    void _buildAnimationControllerFileSchema_v1_8();
    void getActorAnimationControllerInfo(HashedString const&);
    void getAnimationControllers()const;
    void loadActorAnimationControllersSync(ResourcePackManager &);
    void _buildAnimationControllerFileSchema_v1_10();
    ActorAnimationControllerGroup();
    ~ActorAnimationControllerGroup();
    void getActorAnimationController(HashedString const&);
    void _getParent(std::string const&);
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &);
//  void _loadActorAnimationController(std::string const&, Core::Path const&, CurrentCmdVersion); //TODO: incomplete function definition
};
