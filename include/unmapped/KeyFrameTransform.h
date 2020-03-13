#pragma once



class KeyFrameTransform {

public:
    KeyFrameTransform(float); // _ZN17KeyFrameTransformC2Ef
    KeyFrameTransform(ExpressionNode const&, float); // _ZN17KeyFrameTransformC2ERK14ExpressionNodef
    KeyFrameTransform(float, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN17KeyFrameTransformC2EfRK14ExpressionNodeS2_S2_
    void set(ExpressionNode const&); // _ZN17KeyFrameTransform3setERK14ExpressionNode
    void set(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN17KeyFrameTransform3setERK14ExpressionNodeS2_S2_
    void set(ExpressionNode const&, int); // _ZN17KeyFrameTransform3setERK14ExpressionNodei
    void set(ExpressionNode const&, Vec3 const&); // _ZN17KeyFrameTransform3setERK14ExpressionNodeRK4Vec3
    void setPre(ExpressionNode const&); // _ZN17KeyFrameTransform6setPreERK14ExpressionNode
    void setPost(ExpressionNode const&); // _ZN17KeyFrameTransform7setPostERK14ExpressionNode
    void preAndPostAreTheSame()const; // _ZNK17KeyFrameTransform20preAndPostAreTheSameEv
    void setPre(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN17KeyFrameTransform6setPreERK14ExpressionNodeS2_S2_
    void setPost(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN17KeyFrameTransform7setPostERK14ExpressionNodeS2_S2_
    void setPre(ExpressionNode const&, int); // _ZN17KeyFrameTransform6setPreERK14ExpressionNodei
    void setPost(ExpressionNode const&, int); // _ZN17KeyFrameTransform7setPostERK14ExpressionNodei
    void setPre(ExpressionNode const&, Vec3 const&); // _ZN17KeyFrameTransform6setPreERK14ExpressionNodeRK4Vec3
    void setPost(ExpressionNode const&, Vec3 const&); // _ZN17KeyFrameTransform7setPostERK14ExpressionNodeRK4Vec3
    void computeCubicPolynomial(KeyFrameTransform *, KeyFrameTransform &, KeyFrameTransform &, KeyFrameTransform *); // _ZN17KeyFrameTransform22computeCubicPolynomialEPS_RS_S1_S0_
    void toJson(Json::Value &)const; // _ZNK17KeyFrameTransform6toJsonERN4Json5ValueE
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition // _ZNK17KeyFrameTransform7animateER12RenderParamsR15BoneOrientationf17BoneTransformType
    void getTime()const; // _ZNK17KeyFrameTransform7getTimeEv
    void getLerpMode(); // _ZN17KeyFrameTransform11getLerpModeEv
    void getLerpMode()const; // _ZNK17KeyFrameTransform11getLerpModeEv
    ~KeyFrameTransform(); // _ZN17KeyFrameTransformD2Ev
    KeyFrameTransform(KeyFrameTransform &&); // _ZN17KeyFrameTransformC2EOS_
    KeyFrameTransform(KeyFrameTransform const&); // _ZN17KeyFrameTransformC2ERKS_
};
