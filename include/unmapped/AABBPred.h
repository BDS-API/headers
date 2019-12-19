#pragma once

class AABBPred {

public:

    void operator()(AABB const&, AABB const&)const;
};
