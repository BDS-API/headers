#pragma once

#include "../../unmapped/Shareable.h"
#include "../../json/Value.h"
#include <string>
#include <memory>


class ShareableDefinition {

public:
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &); //TODO: incomplete function definition
    void addShareable(Shareable const&);
    ~ShareableDefinition();
    void deserializeData(Json::Value &);
    void addShareableByName(std::string const&);
    ShareableDefinition();
};
