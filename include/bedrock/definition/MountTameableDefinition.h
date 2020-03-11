#pragma once

#include <string>
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./MountTameableDefinition.h"
#include "../../unmapped/MountTamingComponent.h"
#include "../../json/Value.h"


class MountTameableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, MountTamingComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void addAutoRejectItemByName(std::string const&);
    MountTameableDefinition();
    ~MountTameableDefinition();
};
