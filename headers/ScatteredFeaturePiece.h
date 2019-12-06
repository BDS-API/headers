#pragma once

class ScatteredFeaturePiece : StructurePiece {

public:
    virtual ~ScatteredFeaturePiece();

    void ScatteredFeaturePiece(int, int, int, int, int, int);
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
};
