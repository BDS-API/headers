#pragma once



class JigsawJunction {

public:
    void getDeltaSourceY()const;
    void getSourceProjection()const;
    void getDeltaTargetY()const;
    void getTargetProjection()const;
//  JigsawJunction(int, int, int, int, Projection, Projection); //TODO: incomplete function definition
    void getSourcePos()const;
    JigsawJunction(JigsawJunction const&);
};
