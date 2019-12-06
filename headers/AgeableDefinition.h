#pragma once

class AgeableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &);
    void addFeedItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addDropItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initialize(EntityContext &, AgeableComponent &);
    bool canGrowUp(void)const;
    void getTicksAsBaby(void)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void AgeableDefinition(void);
};
