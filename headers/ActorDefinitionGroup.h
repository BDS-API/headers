#pragma once

class ActorDefinitionGroup {

public:
    virtual ~ActorDefinitionGroup();

    void ActorDefinitionGroup(Level &, ResourcePackManager &, IMinecraftEventing &, bool);
    void _getResources(Level &);
    void _loadTemplates(Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value, SemVersion const&);
    void _loadEvents(Json::Value, ActorDefinition &);
    void tryReadEntityResourceFile(PackInstance &, Core::Path const&, Json::Value &);
    void loadActorDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void loadActorDefinitionIdentifier(Json::Value const&, SemVersion const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void loadActorDefinitionRuntimeIdentifier(Json::Value const&, SemVersion const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void getComponentFactory(void);
    void setComponentFactory(ActorComponentFactory *);
    void _setupAnimationResourceDefinitionMap(ActorDefinition &, Level &);
    bool hasComponent(Util::HashString const&, Json::Value const&, Json::Value const&)const;
    bool hasPlayerAsTarget(Json::Value const&)const;
    void tryGetDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void tryGetDefinitionGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _addRef(ActorDefinitionPtr &);
    void _removeRef(ActorDefinitionPtr &);
};
