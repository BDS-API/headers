#pragma once

class ActorDefinition {

public:

    void ActorDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void parse(Json::Value, ActorDefinitionDescriptor &);
    void parseEntityDescription(Json::Value &);
    void initEntityDefinitions(void);
    void getComponentDefinitionGroup(void)const;
};
