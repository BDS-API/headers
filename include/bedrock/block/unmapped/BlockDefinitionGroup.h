#pragma once

#include <string>
#include <memory>


class BlockDefinitionGroup {

public:
    BlockDefinitionGroup(); // _ZN20BlockDefinitionGroupC2Ev
    ~BlockDefinitionGroup(); // _ZN20BlockDefinitionGroupD2Ev
    void registerBlocks(); // _ZN20BlockDefinitionGroup14registerBlocksEv
    void clearDefinitions(); // _ZN20BlockDefinitionGroup16clearDefinitionsEv
    void getBlockDefinitions()const; // _ZNK20BlockDefinitionGroup19getBlockDefinitionsEv
    void tryGetBlockDefinition(std::string const&)const; // _ZNK20BlockDefinitionGroup21tryGetBlockDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&); // _ZN20BlockDefinitionGroup27digestServerBlockPropertiesERK27UpdateBlockPropertiesPacketRK21BlockComponentFactory
    void buildBlockSchema(BlockComponentFactory const&); // _ZN20BlockDefinitionGroup16buildBlockSchemaERK21BlockComponentFactory
//  void _buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &); //TODO: incomplete function definition // _ZN20BlockDefinitionGroup28_buildBlockDescriptionSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
//  void _buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &, BlockComponentFactory const&); //TODO: incomplete function definition // _ZN20BlockDefinitionGroup27_buildBlockComponentsSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EERK21BlockComponentFactory
    void loadResources(ResourcePackManager &, BlockComponentFactory const&); // _ZN20BlockDefinitionGroup13loadResourcesER19ResourcePackManagerRK21BlockComponentFactory
    void _loadDefinitionFormatVersion(Json::Value const&, SemVersion &); // _ZN20BlockDefinitionGroup28_loadDefinitionFormatVersionERKN4Json5ValueER10SemVersion
    void _loadBlockDescription(Json::Value const&, BlockDescription &); // _ZN20BlockDefinitionGroup21_loadBlockDescriptionERKN4Json5ValueER16BlockDescription
    void _loadComponents(Json::Value &, BlockDefinition &, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition>> &); // _ZN20BlockDefinitionGroup15_loadComponentsERN4Json5ValueER15BlockDefinitionRK21BlockComponentFactoryRSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS9_10EmptyClassES3_EEE
};
