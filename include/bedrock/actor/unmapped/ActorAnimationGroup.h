#pragma once

#include "../../../unmapped/HashedString"
#include "../../../unmapped/ResourceLoadManager"
#include "../../../core/Path"
#include "../../../unmapped/PackStats"
#include "../../pack/ResourcePackManager"


class ActorAnimationGroup {

public:

    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationsSync(ResourcePackManager &);
    void setExperimental(bool);
    void _buildAnimationFileSchema_v1_8(bool);
    void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool);
    void clear();
    void getActorAnimationInfo(HashedString const&);
    void getActorAnimation(HashedString const&);
    void getAnimations()const;
    ActorAnimationGroup(void);
};
