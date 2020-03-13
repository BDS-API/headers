#pragma once



class JigsawJunction {

public:
    JigsawJunction(JigsawJunction const&); // _ZN14JigsawJunctionC2ERKS_
//  JigsawJunction(int, int, int, int, Projection, Projection); //TODO: incomplete function definition // _ZN14JigsawJunctionC2Eiiii10ProjectionS0_
    void getSourcePos()const; // _ZNK14JigsawJunction12getSourcePosEv
    void getDeltaSourceY()const; // _ZNK14JigsawJunction15getDeltaSourceYEv
    void getSourceProjection()const; // _ZNK14JigsawJunction19getSourceProjectionEv
    void getDeltaTargetY()const; // _ZNK14JigsawJunction15getDeltaTargetYEv
    void getTargetProjection()const; // _ZNK14JigsawJunction19getTargetProjectionEv
};
