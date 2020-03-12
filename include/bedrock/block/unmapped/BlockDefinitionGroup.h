#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../network/packet/UpdateBlockPropertiesPacket.h"
#include "BlockComponentFactory.h"
#include <string>
#include "BlockDescription.h"
#include "../../definition/BlockDefinition.h"
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/SemVersion.h"


class BlockDefinitionGroup {

public:
//  void _buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &, BlockComponentFactory const&); //TODO: incomplete function definition
    void loadResources(ResourcePackManager &, BlockComponentFactory const&);
    void _loadDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&);
    ~BlockDefinitionGroup();
    void tryGetBlockDefinition(std::string const&)const;
    BlockDefinitionGroup();
    void clearDefinitions();
//  void _buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &); //TODO: incomplete function definition
    void _loadBlockDescription(Json::Value const&, BlockDescription &);
    void buildBlockSchema(BlockComponentFactory const&);
    void getBlockDefinitions()const;
//  void _loadComponents(Json::Value &, BlockDefinition &, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition>> &); //TODO: incomplete function definition
    void registerBlocks();
};
