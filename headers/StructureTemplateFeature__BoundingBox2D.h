#pragma once

class StructureTemplateFeature::BoundingBox2D {

public:

    void BoundingBox2D(int, int, int, int);
    bool isInside(BlockPos const&)const;
};
