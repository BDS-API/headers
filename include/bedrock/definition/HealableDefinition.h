#pragma once

#include "../../json/Value"
#include "../../unmapped/FeedItem"


class HealableDefinition {

public:

    HealableDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>> &);
    void addFeedItem(FeedItem const&);
    void addFeedItemByName(std::string const&);
    void deserializeData(Json::Value &);
    void _loadEffects(FeedItem &, Json::Value &);
    void serializeData(Json::Value &)const;
};
