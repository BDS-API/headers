#pragma once

#include "JigsawBlockInfo.h"
#include <string>
#include "StructurePoolBlockRule.h"
#include <unordered_map>
#include "StructurePoolBlockTagRule.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include <functional>
#include <vector>
#include <memory>
#include "BoundingBox.h"
#include "../bedrock/util/Random.h"
#include "StructureManager.h"
#include "LegacyStructureSettings.h"
#include "LegacyStructureTemplate.h"
#include <utility>


class StructurePoolElement {

public:
    class LazyTemplate;

    virtual void getJigsawMarkers(BlockPos, LegacyStructureSettings &, BlockSource *)const;
//  virtual void getJigsawMarkers(BlockPos, Rotation)const; //TODO: incomplete function definition
    ~StructurePoolElement();
//  virtual void place(BlockSource *, BlockPos, Rotation, BoundingBox, Random &, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
    virtual void handleJigsawBlock(BlockSource *, JigsawBlockInfo &, LegacyStructureSettings &)const;
//  virtual void handleDataMarker(BlockSource *, BlockPos, std::string, std::unordered_map<BlockPos, ActorDefinitionIdentifier, std::hash<BlockPos>, std::equal_to<BlockPos>, std::allocator<std::pair<BlockPos const, ActorDefinitionIdentifier>>> &)const; //TODO: incomplete function definition
//  virtual void setProjection(Projection); //TODO: incomplete function definition
    virtual void getProjection()const;
//  virtual void getSize(Rotation)const; //TODO: incomplete function definition
    virtual bool isValid()const;
//  virtual void getBoundingBox(BlockPos, Rotation)const; //TODO: incomplete function definition
//  void _transformBlockPos(Vec3, Rotation)const; //TODO: incomplete function definition
    void _getTemplate()const;
//  StructurePoolElement(StructureManager &, std::string, Projection); //TODO: incomplete function definition
    StructurePoolElement(StructureManager &, std::string, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*, std::vector const*, std::default_delete<std::vector const>);
    class LazyTemplate {

    public:
        LazyTemplate(StructureManager &, std::string const&, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
        void _findJigsawBlocks(LegacyStructureTemplate &, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
        ~LazyTemplate();
    };
};
