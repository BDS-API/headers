#pragma once

#include "../../level/Level"
#include "../../../json/Value"
#include "../../../core/Path"
#include "../../eventing/IMinecraftEventing"
#include "../../definition/ActorDefinition"
#include "../../../unmapped/SemVersion"
#include "../../../unmapped/PackInstance"
#include "../../pack/ResourcePackManager"
#include "../../../unmapped/HashString"


class ActorDefinitionGroup {

public:
    ActorDefinitionGroup::~ActorDefinitionGroup()

    ActorDefinitionGroup(Level &, ResourcePackManager &, IMinecraftEventing &, bool);
    void _getResources(Level &);
    void _loadTemplates(Level &, std::string const&, Json::Value, SemVersion const&);
    void _loadEvents(Json::Value, ActorDefinition &);
    void tryReadEntityResourceFile(PackInstance &, Core::Path const&, Json::Value &);
    void loadActorDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void loadActorDefinitionIdentifier(Json::Value const&, SemVersion const&, std::string &);
    void loadActorDefinitionRuntimeIdentifier(Json::Value const&, SemVersion const&, std::string &);
    void getComponentFactory();
    void setComponentFactory(ActorComponentFactory *);
    void _setupAnimationResourceDefinitionMap(ActorDefinition &, Level &);
    bool hasComponent(Util::HashString const&, Json::Value const&, Json::Value const&)const;
    bool hasPlayerAsTarget(Json::Value const&)const;
    void tryGetDefinition(std::string const&);
    void tryGetDefinitionGroup(std::string const&, std::string const&);
    void _addRef(ActorDefinitionPtr &);
    void _removeRef(ActorDefinitionPtr &);
};
