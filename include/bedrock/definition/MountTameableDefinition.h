#pragma once

#include <string>
#include <memory>


class MountTameableDefinition {

public:
    ~MountTameableDefinition();
    void addAutoRejectItemByName(std::string const&);
    void serializeData(Json::Value &)const;
    void initialize(EntityContext &, MountTamingComponent &);
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &);
    MountTameableDefinition();
};
