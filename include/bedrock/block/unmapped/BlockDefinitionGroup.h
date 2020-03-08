#pragma once

#include "../../pack/ResourcePackManager"
#include "../../network/packet/UpdateBlockPropertiesPacket"
#include "../../../unmapped/SemVersion"
#include "../../definition/BlockDefinition"
#include "../../../json/Value"


class BlockDefinitionGroup {

public:

    BlockDefinitionGroup(void);
    void registerBlocks();
    void clearDefinitions();
    void getBlockDefinitions()const;
    void tryGetBlockDefinition(std::string const&)const;
    void digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&);
    void buildBlockSchema(BlockComponentFactory const&);
    void _buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &);
    void _buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &, BlockComponentFactory const&);
    void loadResources(ResourcePackManager &, BlockComponentFactory const&);
    void _loadDefinitionFormatVersion(Json::Value const&, SemVersion &);
    void _loadBlockDescription(Json::Value const&, BlockDescription &);
    void _loadComponents(Json::Value &, BlockDefinition &, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition>> &);
};
