#pragma once

#include "../actor/unmapped/ActorDefinitionDescriptor.h"
#include "../../json/Value.h"
#include <string>


class ActorDefinition {

public:

    ActorDefinition(std::string const&);
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void parseEntityDescription(Json::Value &);
    void initEntityDefinitions();
    void getComponentDefinitionGroup()const;
    ~ActorDefinition();
};
