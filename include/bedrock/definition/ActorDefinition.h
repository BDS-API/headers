#pragma once

#include "../../json/Value.h"
#include <string>
#include "../actor/unmapped/ActorDefinitionDescriptor.h"


class ActorDefinition {

public:
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void getComponentDefinitionGroup()const;
    void initEntityDefinitions();
    void parseEntityDescription(Json::Value &);
    ActorDefinition(std::string const&);
    ~ActorDefinition();
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
};
