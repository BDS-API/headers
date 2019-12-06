#pragma once

class BreathableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &);
    void addBreathableBlockByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addNonBreathableBlockByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initialize(EntityContext &, BreathableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void BreathableDefinition(void);
};
