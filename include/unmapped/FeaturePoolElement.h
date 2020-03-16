#pragma once

#include "BoundingBox.h"
#include "StructurePoolElement.h"
#include "../bedrock/util/BlockPos.h"
#include <unordered_map>


class FeaturePoolElement : public StructurePoolElement {

public:
    virtual void getSize__incomplete0(long)const; //TODO: incomplete function definition // _ZNK18FeaturePoolElement7getSizeE8Rotation
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const; // _ZNK18FeaturePoolElement16getJigsawMarkersE8BlockPosR23LegacyStructureSettingsP11BlockSource
    virtual void place__incomplete0(BlockSource *, BlockPos, long, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, long, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition // _ZNK18FeaturePoolElement5placeEP11BlockSource8BlockPos8Rotation11BoundingBoxR6RandomRSt13unordered_mapIS2_25ActorDefinitionIdentifierSt4hashIS2_ESt8equal_toIS2_ESaISt4pairIKS2_S8_EEE
    virtual ~FeaturePoolElement(); // _ZN18FeaturePoolElementD2Ev
    virtual void __fake_function0(); // fake
    FeaturePoolElement(StructureManager &, Feature const*); // _ZN18FeaturePoolElementC2ER16StructureManagerPK7Feature
};
