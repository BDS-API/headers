#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include <memory>
#include <vector>
#include <string>
#include <unordered_map>
#include "BoundingBox.h"


class StructurePoolElement {

public:
    class LazyTemplate;

//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    virtual void handleDataMarker(BlockSource *, BlockPos, std::string, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const;
    virtual void getProjection()const;
    virtual bool isValid()const;
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const;
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
//  virtual void getBoundingBox(BlockPos, Rotation)const; //TODO: incomplete function definition
//  virtual void setProjection(Projection); //TODO: incomplete function definition
//  virtual void getJigsawMarkers(BlockPos, Rotation)const; //TODO: incomplete function definition
    ~StructurePoolElement();
    StructurePoolElement(StructureManager &, std::string, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*, std::vector const*, std::default_delete<std::vector const>);
//  void _transformBlockPos(Vec3, Rotation)const; //TODO: incomplete function definition
    void _getTemplate()const;
//  StructurePoolElement(StructureManager &, std::string, Projection); //TODO: incomplete function definition
    class LazyTemplate {

    public:
        ~LazyTemplate();
        LazyTemplate(StructureManager &, std::string const&, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
        void _findJigsawBlocks(LegacyStructureTemplate &, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
    };
};
