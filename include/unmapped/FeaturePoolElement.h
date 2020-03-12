#pragma once

#include <unordered_map>
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <functional>
#include "../bedrock/level/feature/Feature.h"
#include <memory>
#include "BoundingBox.h"
#include "../bedrock/util/Random.h"
#include "StructureManager.h"
#include "LegacyStructureSettings.h"
#include "StructurePoolElement.h"
#include <utility>


class FeaturePoolElement : StructurePoolElement {

public:
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    ~FeaturePoolElement();
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    FeaturePoolElement(StructureManager &, Feature const*);
};
