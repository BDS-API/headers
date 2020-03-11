#pragma once

#include "./JigsawJunction.h"


class JigsawJunction {

public:

    JigsawJunction(JigsawJunction const&);
//  JigsawJunction(int, int, int, int, Projection, Projection); //TODO: incomplete function definition
    void getSourcePos()const;
    void getDeltaSourceY()const;
    void getSourceProjection()const;
    void getDeltaTargetY()const;
    void getTargetProjection()const;
};
