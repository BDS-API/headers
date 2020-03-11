#pragma once

#include "./ShareableDefinition.h"
#include <memory>
#include "../../json/Value.h"
#include "../../unmapped/Shareable.h"
#include <string>


class ShareableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &); //TODO: incomplete function definition
    void addShareableByName(std::string const&);
    void addShareable(Shareable const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ShareableDefinition();
    ~ShareableDefinition();
};
