#pragma once

#include "../bedrock/util/BlockPos.h"
#include <unordered_map>
#include "BoundingBox.h"
#include "StructurePoolElement.h"


class FeaturePoolElement : StructurePoolElement {

public:
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    ~FeaturePoolElement();
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    FeaturePoolElement(StructureManager &, Feature const*);
};
