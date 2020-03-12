#pragma once

#include "../../unmapped/MountTamingComponent.h"
#include <string>
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class MountTameableDefinition {

public:
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &); //TODO: incomplete function definition
    ~MountTameableDefinition();
    void initialize(EntityContext &, MountTamingComponent &);
    void addAutoRejectItemByName(std::string const&);
    MountTameableDefinition();
};
