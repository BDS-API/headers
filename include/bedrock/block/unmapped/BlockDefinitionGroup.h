#pragma once

#include <string>
#include <memory>


class BlockDefinitionGroup {

public:
    void _loadDefinitionFormatVersion(Json::Value const&, SemVersion &);
//  void _buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &, BlockComponentFactory const&); //TODO: incomplete function definition
    void buildBlockSchema(BlockComponentFactory const&);
    void clearDefinitions();
    void getBlockDefinitions()const;
    void digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&);
    void _loadBlockDescription(Json::Value const&, BlockDescription &);
    void _loadComponents(Json::Value &, BlockDefinition &, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition>> &);
//  void _buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &); //TODO: incomplete function definition
    ~BlockDefinitionGroup();
    void tryGetBlockDefinition(std::string const&)const;
    void loadResources(ResourcePackManager &, BlockComponentFactory const&);
    BlockDefinitionGroup();
    void registerBlocks();
};
