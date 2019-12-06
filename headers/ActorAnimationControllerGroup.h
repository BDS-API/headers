#pragma once

class ActorAnimationControllerGroup {

public:

    void _getParent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ActorAnimationControllerGroup(void);
    void loadActorAnimationControllersAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationControllersSync(ResourcePackManager &);
    void _buildAnimationControllerFileSchema_v1_8(void);
    void upgrade_v1_8_to_v1_10(Json::Value &);
    void _buildAnimationControllerFileSchema_v1_10(void);
    void _loadActorAnimationController(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, CurrentCmdVersion);
    void _getActorAnimationControllerLock(void);
    void clear(void);
    void getActorAnimationControllerInfo(HashedString const&);
    void getActorAnimationController(HashedString const&);
    void getAnimationControllers(void)const;
};
