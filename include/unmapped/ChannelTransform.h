#pragma once



class ChannelTransform {

public:
    ChannelTransform(ExpressionNode const&); // _ZN16ChannelTransformC2ERK14ExpressionNode
    ChannelTransform(ExpressionNode const&, Vec3 const&); // _ZN16ChannelTransformC2ERK14ExpressionNodeRK4Vec3
    ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN16ChannelTransformC2ERK14ExpressionNodeS2_S2_
    ChannelTransform(ExpressionNode const&, int); // _ZN16ChannelTransformC2ERK14ExpressionNodei
    void operator==(ChannelTransform const&)const; // _ZNK16ChannelTransformeqERKS_
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition // _ZNK16ChannelTransform7animateER12RenderParamsR15BoneOrientationf17BoneTransformType
    void toJson(Json::Value &)const; // _ZNK16ChannelTransform6toJsonERN4Json5ValueE
    ~ChannelTransform(); // _ZN16ChannelTransformD2Ev
    ChannelTransform(ChannelTransform const&); // _ZN16ChannelTransformC2ERKS_
};
