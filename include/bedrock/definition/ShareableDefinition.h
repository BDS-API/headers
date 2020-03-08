#pragma once

#include "../../unmapped/Shareable"
#include "../../json/Value"


class ShareableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &);
    void addShareableByName(std::string const&);
    void addShareable(Shareable const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ShareableDefinition(void);
};
