#pragma once

#include <memory>
#include "../../unmapped/FeedItem.h"
#include "../../json/Value.h"
#include "./HealableDefinition.h"
#include <string>


class HealableDefinition {

public:

    HealableDefinition();
    ~HealableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>> &); //TODO: incomplete function definition
    void addFeedItem(FeedItem const&);
    void addFeedItemByName(std::string const&);
    void deserializeData(Json::Value &);
    void _loadEffects(FeedItem &, Json::Value &);
    void serializeData(Json::Value &)const;
};
