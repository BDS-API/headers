#pragma once

#include "../../json/Value"
#include "../actor/unmapped/ActorDefinitionDescriptor"


class ActorDefinition {

public:

    ActorDefinition(std::string const&);
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void parseEntityDescription(Json::Value &);
    void initEntityDefinitions();
    void getComponentDefinitionGroup()const;
};
