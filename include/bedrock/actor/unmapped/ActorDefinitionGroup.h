#pragma once

#include "../../../json/Value.h"
#include <string>


class ActorDefinitionGroup {

public:
    class EDLWrapper;

    ~ActorDefinitionGroup(); // _ZN20ActorDefinitionGroupD2Ev
    ActorDefinitionGroup(Level &, ResourcePackManager &, IMinecraftEventing &, bool); // _ZN20ActorDefinitionGroupC2ER5LevelR19ResourcePackManagerR18IMinecraftEventingb
    void _getResources(Level &); // _ZN20ActorDefinitionGroup13_getResourcesER5Level
    void _loadTemplates(Level &, std::string const&, Json::Value, SemVersion const&); // _ZN20ActorDefinitionGroup14_loadTemplatesER5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Json5ValueERK10SemVersion
    void _loadEvents(Json::Value, ActorDefinition &); // _ZN20ActorDefinitionGroup11_loadEventsEN4Json5ValueER15ActorDefinition
    void tryReadEntityResourceFile(PackInstance &, Core::Path const&, Json::Value &); // _ZN20ActorDefinitionGroup25tryReadEntityResourceFileER12PackInstanceRKN4Core4PathERN4Json5ValueE
    void loadActorDefinitionFormatVersion(Json::Value const&, SemVersion &); // _ZN20ActorDefinitionGroup32loadActorDefinitionFormatVersionERKN4Json5ValueER10SemVersion
    void loadActorDefinitionIdentifier(Json::Value const&, SemVersion const&, std::string &); // _ZN20ActorDefinitionGroup29loadActorDefinitionIdentifierERKN4Json5ValueERK10SemVersionRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadActorDefinitionRuntimeIdentifier(Json::Value const&, SemVersion const&, std::string &); // _ZN20ActorDefinitionGroup36loadActorDefinitionRuntimeIdentifierERKN4Json5ValueERK10SemVersionRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getComponentFactory(); // _ZN20ActorDefinitionGroup19getComponentFactoryEv
    void setComponentFactory(ActorComponentFactory *); // _ZN20ActorDefinitionGroup19setComponentFactoryEP21ActorComponentFactory
    void _setupAnimationResourceDefinitionMap(ActorDefinition &, Level &); // _ZN20ActorDefinitionGroup36_setupAnimationResourceDefinitionMapER15ActorDefinitionR5Level
    bool hasComponent(Util::HashString const&, Json::Value const&, Json::Value const&)const; // _ZNK20ActorDefinitionGroup12hasComponentERKN4Util10HashStringERKN4Json5ValueES7_
    bool hasPlayerAsTarget(Json::Value const&)const; // _ZNK20ActorDefinitionGroup17hasPlayerAsTargetERKN4Json5ValueE
    void tryGetDefinition(std::string const&); // _ZN20ActorDefinitionGroup16tryGetDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tryGetDefinitionGroup(std::string const&, std::string const&); // _ZN20ActorDefinitionGroup21tryGetDefinitionGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void _addRef(ActorDefinitionPtr &); // _ZN20ActorDefinitionGroup7_addRefER18ActorDefinitionPtr
    void _removeRef(ActorDefinitionPtr &); // _ZN20ActorDefinitionGroup10_removeRefER18ActorDefinitionPtr
    std::string getList()const; // _ZNK20ActorDefinitionGroup7getListB5cxx11Ev
    std::string getTemplateMap()const; // _ZNK20ActorDefinitionGroup14getTemplateMapB5cxx11Ev
    class EDLWrapper {

    public:
        ~EDLWrapper(); // _ZN20ActorDefinitionGroup10EDLWrapperD2Ev
        EDLWrapper(); // _ZN20ActorDefinitionGroup10EDLWrapperC2Ev
    };
};
