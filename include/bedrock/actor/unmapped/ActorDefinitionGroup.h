#pragma once

#include <string>
#include "../../../json/Value.h"


class ActorDefinitionGroup {

public:
    class EDLWrapper;

    ~ActorDefinitionGroup();
    void _addRef(ActorDefinitionPtr &);
    void tryGetDefinition(std::string const&);
    void _loadTemplates(Level &, std::string const&, Json::Value, SemVersion const&);
    bool hasPlayerAsTarget(Json::Value const&)const;
    void loadActorDefinitionIdentifier(Json::Value const&, SemVersion const&, std::string &);
    void getComponentFactory();
    void tryGetDefinitionGroup(std::string const&, std::string const&);
    std::string getList()const;
    bool hasComponent(Util::HashString const&, Json::Value const&, Json::Value const&)const;
    void loadActorDefinitionRuntimeIdentifier(Json::Value const&, SemVersion const&, std::string &);
    ActorDefinitionGroup(Level &, ResourcePackManager &, IMinecraftEventing &, bool);
    void tryReadEntityResourceFile(PackInstance &, Core::Path const&, Json::Value &);
    void _getResources(Level &);
    std::string getTemplateMap()const;
    void _loadEvents(Json::Value, ActorDefinition &);
    void loadActorDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void _setupAnimationResourceDefinitionMap(ActorDefinition &, Level &);
    void _removeRef(ActorDefinitionPtr &);
    void setComponentFactory(ActorComponentFactory *);
    class EDLWrapper {

    public:
        ~EDLWrapper();
        EDLWrapper();
    };
};
