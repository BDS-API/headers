#pragma once

#include "../../../core/Path.h"
#include "../../../unmapped/ResourceLoadManager.h"
#include "../../../unmapped/HashedString.h"
#include "../../pack/ResourcePackManager.h"
#include "../../../unmapped/PackStats.h"
#include <string>


class ActorAnimationGroup {

public:

    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationsSync(ResourcePackManager &);
    void setExperimental(bool);
    void _buildAnimationFileSchema_v1_8(bool);
//  void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool); //TODO: incomplete function definition
    void clear();
    void getActorAnimationInfo(HashedString const&);
    void getActorAnimation(HashedString const&);
    void getAnimations()const;
    ~ActorAnimationGroup();
    ActorAnimationGroup();
};
