#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../../unmapped/HashString.h"
#include <string>
#include "../../../unmapped/PackInstance.h"
#include "../../level/Level.h"
#include "ActorDefinitionPtr.h"
#include "../../definition/ActorDefinition.h"
#include "../../eventing/IMinecraftEventing.h"
#include "../../../json/Value.h"
#include "../../../unmapped/SemVersion.h"
#include "../../../core/Path.h"
#include "ActorComponentFactory.h"


class ActorDefinitionGroup {

public:
    class EDLWrapper;

    ~ActorDefinitionGroup();
    void getComponentFactory();
    void _setupAnimationResourceDefinitionMap(ActorDefinition &, Level &);
    void loadActorDefinitionRuntimeIdentifier(Json::Value const&, SemVersion const&, std::string &);
    bool hasComponent(Util::HashString const&, Json::Value const&, Json::Value const&)const;
    void tryGetDefinitionGroup(std::string const&, std::string const&);
    void _getResources(Level &);
    void _addRef(ActorDefinitionPtr &);
    std::string getList()const;
    std::string getTemplateMap()const;
    void tryGetDefinition(std::string const&);
    void loadActorDefinitionIdentifier(Json::Value const&, SemVersion const&, std::string &);
    void tryReadEntityResourceFile(PackInstance &, Core::Path const&, Json::Value &);
    void setComponentFactory(ActorComponentFactory *);
    void _loadEvents(Json::Value, ActorDefinition &);
    void _loadTemplates(Level &, std::string const&, Json::Value, SemVersion const&);
    ActorDefinitionGroup(Level &, ResourcePackManager &, IMinecraftEventing &, bool);
    void _removeRef(ActorDefinitionPtr &);
    void loadActorDefinitionFormatVersion(Json::Value const&, SemVersion &);
    bool hasPlayerAsTarget(Json::Value const&)const;
    class EDLWrapper {

    public:
        ~EDLWrapper();
        EDLWrapper();
    };
};
