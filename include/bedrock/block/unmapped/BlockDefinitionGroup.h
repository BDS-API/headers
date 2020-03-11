#pragma once

#include "../../../unmapped/SemVersion.h"
#include <string>
#include <memory>
#include "../../network/packet/UpdateBlockPropertiesPacket.h"
#include "../../pack/ResourcePackManager.h"
#include "./BlockDescription.h"
#include "../../../json/Value.h"
#include "../../definition/BlockDefinition.h"
#include "./BlockComponentFactory.h"


class BlockDefinitionGroup {

public:

    BlockDefinitionGroup();
    ~BlockDefinitionGroup();
    void registerBlocks();
    void clearDefinitions();
    void getBlockDefinitions()const;
    void tryGetBlockDefinition(std::string const&)const;
    void digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&);
    void buildBlockSchema(BlockComponentFactory const&);
//  void _buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &); //TODO: incomplete function definition
//  void _buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &, BlockComponentFactory const&); //TODO: incomplete function definition
    void loadResources(ResourcePackManager &, BlockComponentFactory const&);
    void _loadDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void _loadBlockDescription(Json::Value const&, BlockDescription &);
//  void _loadComponents(Json::Value &, BlockDefinition &, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition>> &); //TODO: incomplete function definition
};
