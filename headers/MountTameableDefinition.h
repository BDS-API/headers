#pragma once

class MountTameableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &);
    void initialize(EntityContext &, MountTamingComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void addAutoRejectItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void MountTameableDefinition(void);
};
