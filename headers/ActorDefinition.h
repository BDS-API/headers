#pragma once

class ActorDefinition {

public:

    void ActorDefinition(std::string const&);
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void parseEntityDescription(Json::Value &);
    void initEntityDefinitions(void);
    void getComponentDefinitionGroup(void)const;
};
