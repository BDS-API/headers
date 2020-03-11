#pragma once

#include <utility>
#include <unordered_map>
#include "./StructureManager.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LegacyStructureSettings.h"
#include "./BoundingBox.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "./StructurePoolElement.h"
#include <functional>
#include "../bedrock/level/feature/Feature.h"


class FeaturePoolElement : StructurePoolElement {

public:
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    virtual ~FeaturePoolElement();

    FeaturePoolElement(StructureManager &, Feature const*);
};
