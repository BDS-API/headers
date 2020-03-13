#pragma once

#include <string>
#include "../../json/Value.h"


class ActorDefinition {

public:
    ActorDefinition(std::string const&); // _ZN15ActorDefinitionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &); // _ZN15ActorDefinition15parseAttributesERN4Json5ValueER25ActorDefinitionDescriptor
    void parse(Json::Value, ActorDefinitionDescriptor &); // _ZN15ActorDefinition5parseEN4Json5ValueER25ActorDefinitionDescriptor
    void parseEntityDescription(Json::Value &); // _ZN15ActorDefinition22parseEntityDescriptionERN4Json5ValueE
    void initEntityDefinitions(); // _ZN15ActorDefinition21initEntityDefinitionsEv
    void getComponentDefinitionGroup()const; // _ZNK15ActorDefinition27getComponentDefinitionGroupEv
    ~ActorDefinition(); // _ZN15ActorDefinitionD2Ev
};
