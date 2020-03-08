#pragma once



class JigsawJunction {

public:

    JigsawJunction(JigsawJunction const&);
    JigsawJunction(int, int, int, int, Projection, Projection);
    void getSourcePos(void)const;
    void getDeltaSourceY(void)const;
    void getSourceProjection(void)const;
    void getDeltaTargetY(void)const;
    void getTargetProjection(void)const;
};
