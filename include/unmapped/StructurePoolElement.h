#pragma once

#include "../bedrock/util/Vec3.h"
#include <string>
#include "../bedrock/util/BlockPos.h"
#include <memory>
#include <vector>
#include <unordered_map>
#include "BoundingBox.h"


class StructurePoolElement {

public:
    class LazyTemplate;

    virtual void getSize__incomplete0(long)const; //TODO: incomplete function definition // _ZNK20StructurePoolElement7getSizeE8Rotation
    virtual void getJigsawMarkers__incomplete1(BlockPos, long)const; //TODO: incomplete function definition // _ZNK20StructurePoolElement16getJigsawMarkersE8BlockPos8Rotation
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const; // _ZNK20StructurePoolElement16getJigsawMarkersE8BlockPosR23LegacyStructureSettingsP11BlockSource
    virtual void getBoundingBox__incomplete0(BlockPos, long)const; //TODO: incomplete function definition // _ZNK20StructurePoolElement14getBoundingBoxE8BlockPos8Rotation
    virtual void setProjection__incomplete0(long); //TODO: incomplete function definition // _ZN20StructurePoolElement13setProjectionE10Projection
    virtual void getProjection()const; // _ZNK20StructurePoolElement13getProjectionEv
    virtual void place__incomplete0(BlockSource *, BlockPos, long, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, long, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition // _ZNK20StructurePoolElement5placeEP11BlockSource8BlockPos8Rotation11BoundingBoxR6RandomRSt13unordered_mapIS2_25ActorDefinitionIdentifierSt4hashIS2_ESt8equal_toIS2_ESaISt4pairIKS2_S8_EEE
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const; // _ZNK20StructurePoolElement17handleJigsawBlockEP11BlockSourceR15JigsawBlockInfoR23LegacyStructureSettings
    virtual void handleDataMarker(BlockSource *, BlockPos, std::string, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, long, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; // _ZNK20StructurePoolElement16handleDataMarkerEP11BlockSource8BlockPosNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt13unordered_mapIS2_25ActorDefinitionIdentifierSt4hashIS2_ESt8equal_toIS2_ESaISt4pairIKS2_SA_EEE
    virtual bool isValid()const; // _ZNK20StructurePoolElement7isValidEv
    virtual ~StructurePoolElement(); // _ZN20StructurePoolElementD2Ev
    virtual void __fake_function0(); // fake
//    StructurePoolElement(StructureManager &, std::string, long); //TODO: incomplete function definition // _ZN20StructurePoolElementC2ER16StructureManagerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE10Projection
    void _getTemplate()const; // _ZNK20StructurePoolElement12_getTemplateEv
    StructurePoolElement(StructureManager &, std::string, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*, std::vector const*, std::default_delete<std::vector const>); // _ZN20StructurePoolElementC2ER16StructureManagerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKSt6vectorISt10unique_ptrI22StructurePoolBlockRuleSt14default_deleteISA_EESaISD_EEPKS8_IS9_I25StructurePoolBlockTagRuleSB_ISI_EESaISK_EEPKS8_IS9_I22StructurePoolActorRuleSB_ISP_EESaISR_EE10Projection
//    void _transformBlockPos(Vec3, long)const; //TODO: incomplete function definition // _ZNK20StructurePoolElement18_transformBlockPosE4Vec38Rotation
    class LazyTemplate {

    public:
        ~LazyTemplate(); // _ZN20StructurePoolElement12LazyTemplateD2Ev
        LazyTemplate(StructureManager &, std::string const&, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*); // _ZN20StructurePoolElement12LazyTemplateC2ER16StructureManagerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKSt6vectorISt10unique_ptrI25StructurePoolBlockTagRuleSt14default_deleteISD_EESaISG_EE
        void _findJigsawBlocks(LegacyStructureTemplate &, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*); // _ZN20StructurePoolElement12LazyTemplate17_findJigsawBlocksER23LegacyStructureTemplatePKSt6vectorISt10unique_ptrI25StructurePoolBlockTagRuleSt14default_deleteIS5_EESaIS8_EE
    };
};
