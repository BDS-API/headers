#pragma once

#include "StructurePoolElement.h"
#include "BoundingBox.h"
#include "../bedrock/util/BlockPos.h"
#include <unordered_map>


class FeaturePoolElement : StructurePoolElement {

public:
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition // _ZNK18FeaturePoolElement7getSizeE8Rotation
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const; // _ZNK18FeaturePoolElement16getJigsawMarkersE8BlockPosR23LegacyStructureSettingsP11BlockSource
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition // _ZNK18FeaturePoolElement5placeEP11BlockSource8BlockPos8Rotation11BoundingBoxR6RandomRSt13unordered_mapIS2_25ActorDefinitionIdentifierSt4hashIS2_ESt8equal_toIS2_ESaISt4pairIKS2_S8_EEE
    ~FeaturePoolElement(); // _ZN18FeaturePoolElementD2Ev
    FeaturePoolElement(StructureManager &, Feature const*); // _ZN18FeaturePoolElementC2ER16StructureManagerPK7Feature
};
