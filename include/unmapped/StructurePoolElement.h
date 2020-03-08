#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"
#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class StructurePoolElement {

public:
    virtual void getSize(Rotation)const;
    virtual void getJigsawMarkers(BlockPos, Rotation)const;
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    virtual void getBoundingBox(BlockPos, Rotation)const;
    virtual void setProjection(Projection);
    virtual void getProjection()const;
    virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const;
    virtual void handleDataMarker(BlockSource *, BlockPos, std::string, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual bool isValid()const;
    virtual StructurePoolElement::~StructurePoolElement()

    StructurePoolElement(StructureManager &, std::string, Projection);
    void _getTemplate()const;
    StructurePoolElement(StructureManager &, std::string, std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>> const*, std::vector const*<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<std::vector const>>, std::allocator<StructurePoolBlockTagRule>>, std::vector const*<std::unique_ptr<StructurePoolActorRule, std::default_delete<std::vector const>>, std::allocator<StructurePoolActorRule>>, Projection);
    void _transformBlockPos(Vec3, Rotation)const;
};
