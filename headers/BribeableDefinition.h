#pragma once

class BribeableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &);
    void addBribeItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initialize(EntityContext &, BribeableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void BribeableDefinition(void);
};
