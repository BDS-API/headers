#pragma once

#include "../../../unmapped/SemVersion.h"
#include "../../../unmapped/PackInstance.h"
#include "./ActorComponentFactory.h"
#include "../../../core/Path.h"
#include "../../../unmapped/HashString.h"
#include "../../definition/ActorDefinition.h"
#include "../../eventing/IMinecraftEventing.h"
#include "../../level/Level.h"
#include "../../pack/ResourcePackManager.h"
#include "../../../json/Value.h"
#include "./ActorDefinitionPtr.h"
#include <string>


class ActorDefinitionGroup {

public:
    virtual ~ActorDefinitionGroup();

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
    std::string getList()const;
    std::string getTemplateMap()const;
};
