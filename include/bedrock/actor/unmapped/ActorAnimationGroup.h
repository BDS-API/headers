#pragma once

#include "../../pack/ResourcePackManager.h"
#include <string>
#include "../../../unmapped/PackStats.h"
#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/ResourceLoadManager.h"
#include "../../../core/Path.h"


class ActorAnimationGroup {

public:
    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
//  void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool); //TODO: incomplete function definition
    void getAnimations()const;
    void getActorAnimation(HashedString const&);
    void setExperimental(bool);
    void clear();
    void _buildAnimationFileSchema_v1_8(bool);
    ~ActorAnimationGroup();
    ActorAnimationGroup();
    void loadActorAnimationsSync(ResourcePackManager &);
    void getActorAnimationInfo(HashedString const&);
};
