#pragma once

#include <memory>
#include "../../json/Value.h"
#include <string>
#include "../../unmapped/FeedItem.h"


class HealableDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    HealableDefinition();
    void addFeedItem(FeedItem const&);
    void _loadEffects(FeedItem &, Json::Value &);
    void addFeedItemByName(std::string const&);
    ~HealableDefinition();
};
