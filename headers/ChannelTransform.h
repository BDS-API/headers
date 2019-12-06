#pragma once

class ChannelTransform {

public:

    void ChannelTransform(ExpressionNode const&);
    void ChannelTransform(ExpressionNode const&, Vec3 const&);
    void ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void ChannelTransform(ExpressionNode const&, int);
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    void toJson(Json::Value &)const;
    void ChannelTransform(ChannelTransform const&);
};
