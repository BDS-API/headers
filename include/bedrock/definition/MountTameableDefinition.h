#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/MountTamingComponent"


class MountTameableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &);
    void initialize(EntityContext &, MountTamingComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void addAutoRejectItemByName(std::string const&);
    MountTameableDefinition(void);
};
