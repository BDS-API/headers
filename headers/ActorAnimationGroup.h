#pragma once

class ActorAnimationGroup {

public:

    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationsSync(ResourcePackManager &);
    void setExperimental(bool);
    void _buildAnimationFileSchema_v1_8(bool);
    void loadActorAnimation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool);
    void clear(void);
    void getActorAnimationInfo(HashedString const&);
    void getActorAnimation(HashedString const&);
    void getAnimations(void)const;
    void ActorAnimationGroup(void);
};
