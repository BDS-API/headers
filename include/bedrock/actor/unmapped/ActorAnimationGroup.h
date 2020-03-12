#pragma once

#include <string>


class ActorAnimationGroup {

public:
    void setExperimental(bool);
//  void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool); //TODO: incomplete function definition
    ~ActorAnimationGroup();
    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
    ActorAnimationGroup();
    void clear();
    void loadActorAnimationsSync(ResourcePackManager &);
    void getAnimations()const;
    void getActorAnimation(HashedString const&);
    void _buildAnimationFileSchema_v1_8(bool);
    void getActorAnimationInfo(HashedString const&);
};
