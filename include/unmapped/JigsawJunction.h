#pragma once



class JigsawJunction {

public:
    void getSourceProjection()const;
    void getDeltaTargetY()const;
//  JigsawJunction(int, int, int, int, Projection, Projection); //TODO: incomplete function definition
    JigsawJunction(JigsawJunction const&);
    void getSourcePos()const;
    void getDeltaSourceY()const;
    void getTargetProjection()const;
};
