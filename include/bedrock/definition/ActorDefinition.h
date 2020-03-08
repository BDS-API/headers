#pragma once

#include "../actor/unmapped/ActorDefinitionDescriptor"
#include "../../json/Value"


class ActorDefinition {

public:

    ActorDefinition(std::string const&);
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void parseEntityDescription(Json::Value &);
    void initEntityDefinitions();
    void getComponentDefinitionGroup()const;
};
