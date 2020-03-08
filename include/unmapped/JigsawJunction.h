#pragma once



class JigsawJunction {

public:

    JigsawJunction(JigsawJunction const&);
    JigsawJunction(int, int, int, int, Projection, Projection);
    void getSourcePos()const;
    void getDeltaSourceY()const;
    void getSourceProjection()const;
    void getDeltaTargetY()const;
    void getTargetProjection()const;
};
