#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/PieceWeight.h"
#include "../../../block/selector/BlockSelector.h"
#include "../../../../unmapped/Block.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "../../LevelChunk.h"


class StructurePiece {

public:
    ~StructurePiece();
    virtual bool asPoolElement();
    virtual void getWorldX(int, int);
    virtual void getType()const;
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void moveBoundingBox(int, int, int);
    virtual void getWorldZ(int, int);
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    bool isInChunk(ChunkPos const&)const;
    void setGenDepth(int);
    bool edgesLiquid(BlockSource *, BoundingBox const&);
    void maybeGenerateBlock(BlockSource *, BoundingBox const&, Random &, float, int, int, int, Block const&);
    void getOrientationData(Block const*, unsigned short);
    void findCollisionPiece(std::vector<std::unique_ptr<StructurePiece>> const&, BoundingBox const&);
    StructurePiece(int);
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, Block const&, Block const&, bool);
    void getWorldY(int);
    void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool, Random &, BlockSelector const&);
    void generateUpperHalfSphere(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, bool);
    void getLocatorPosition()const;
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, bool, Random &, BlockSelector const&);
    bool isCloseToChunk(ChunkPos const&, int)const;
    void generateAirColumnUp(BlockSource *, int, int, int, BoundingBox const&);
    void getBoundingBox()const;
    bool isAboveGround(int, int, int, BlockSource *);
    void getGenDepth()const;
    bool isAir(BlockSource *, int, int, int, BoundingBox const&);
    void generateMaybeBox(BlockSource *, BoundingBox const&, Random &, float, int, int, int, int, int, int, Block const&, Block const&, bool, bool);
    void getTotalWeight(std::vector<PieceWeight> const&);
    StructurePiece(StructurePiece const&);
    void generateAirBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int);
    void _getWorldPos(int, int, int);
    void getBlock(BlockSource *, int, int, int, BoundingBox const&);
};
