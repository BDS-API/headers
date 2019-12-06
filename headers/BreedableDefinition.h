#pragma once

class BreedableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &);
    void addBreedItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addEnvironmentRequirement(EnvironmentRequirement const&);
    void addBreedableType(BreedableType const&);
    void initialize(EntityContext &, BreedableComponent &);
    void deserializeData(Json::Value &);
    void _parseEnvironmentRequirements(Json::Value);
    void _parseBreedTypes(Json::Value);
    void serializeData(Json::Value &)const;
    void BreedableDefinition(void);
};
