#pragma once

#include "../../../unmapped/HashedString"
#include "../../../unmapped/ResourceLoadManager"
#include "../../../core/Path"
#include "../../../json/Value"
#include "../../pack/ResourcePackManager"


class ActorAnimationControllerGroup {

public:

    void _getParent(std::string const&);
    ActorAnimationControllerGroup(void);
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationControllersSync(ResourcePackManager &);
    void _buildAnimationControllerFileSchema_v1_8();
    void upgrade_v1_8_to_v1_10(Json::Value &);
    void _buildAnimationControllerFileSchema_v1_10();
    void _loadActorAnimationController(std::string const&, Core::Path const&, CurrentCmdVersion);
    void _getActorAnimationControllerLock();
    void clear();
    void getActorAnimationControllerInfo(HashedString const&);
    void getActorAnimationController(HashedString const&);
    void getAnimationControllers()const;
};
