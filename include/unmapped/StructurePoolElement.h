#pragma once

#include <utility>
#include "../bedrock/util/Vec3.h"
#include <unordered_map>
#include "./StructureManager.h"
#include "./StructurePoolBlockRule.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./JigsawBlockInfo.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LegacyStructureSettings.h"
#include "./BoundingBox.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include <functional>
#include "../bedrock/util/BlockPos.h"
#include <string>


class StructurePoolElement {

public:
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
//  virtual void getJigsawMarkers(BlockPos, Rotation)const; //TODO: incomplete function definition
    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
//  virtual void getBoundingBox(BlockPos, Rotation)const; //TODO: incomplete function definition
//  virtual void setProjection(Projection); //TODO: incomplete function definition
    virtual void getProjection()const;
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const;
//  virtual void handleDataMarker(BlockSource *, BlockPos, std::string, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    virtual bool isValid()const;
    virtual ~StructurePoolElement();

//  StructurePoolElement(StructureManager &, std::string, Projection); //TODO: incomplete function definition
    void _getTemplate()const;
    StructurePoolElement(StructureManager &, std::string, std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>> const*, std::vector const*, std::default_delete<std::vector const>);
//  void _transformBlockPos(Vec3, Rotation)const; //TODO: incomplete function definition
};
