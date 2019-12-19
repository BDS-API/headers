#pragma once

class FeaturePoolElement : StructurePoolElement {

public:
    virtual void getSize(Rotation)const;
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual FeaturePoolElement::~FeaturePoolElement();

    FeaturePoolElement(StructureManager &, Feature const*);
};
