#pragma once

#include <string>
#include <memory>


class ShareableDefinition {

public:
    void addShareable(Shareable const&);
    void addShareableByName(std::string const&);
    ~ShareableDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &);
    ShareableDefinition();
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
