#pragma once

class StructurePoolElement {

    virtual void getSize(Rotation)const;
    virtual void getJigsawMarkers(BlockPos, Rotation)const;
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
    virtual void getBoundingBox(BlockPos, Rotation)const;
    virtual void setProjection(Projection);
    virtual void getProjection(void)const;
    virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const;
    virtual void handleDataMarker(BlockSource *, BlockPos, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual void isValid(void)const;
    virtual ~StructurePoolElement();
    virtual ~StructurePoolElement();
}
