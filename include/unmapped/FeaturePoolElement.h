#pragma once

#include "../bedrock/level/feature/Feature"
#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"
#include "../bedrock/block/unmapped/BlockSource"


class FeaturePoolElement : StructurePoolElement {

public:
    virtual void getSize(Rotation)const;
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    FeaturePoolElement::~FeaturePoolElement()

    FeaturePoolElement(StructureManager &, Feature const*);
};
