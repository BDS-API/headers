#pragma once

#include <string>
#include <memory>


class HealableDefinition {

public:
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    HealableDefinition();
    void addFeedItemByName(std::string const&);
    void _loadEffects(FeedItem &, Json::Value &);
    ~HealableDefinition();
    void addFeedItem(FeedItem const&);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>> &);
};
