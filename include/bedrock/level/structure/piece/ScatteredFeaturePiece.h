#pragma once

class ScatteredFeaturePiece : StructurePiece {

public:
    virtual ScatteredFeaturePiece::~ScatteredFeaturePiece();

    ScatteredFeaturePiece(int, int, int, int, int, int);
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
};
