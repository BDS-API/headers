#pragma once



class ChannelTransform {

public:
    ChannelTransform(ChannelTransform const&);
    ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    ~ChannelTransform();
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    ChannelTransform(ExpressionNode const&, Vec3 const&);
    void operator==(ChannelTransform const&)const;
    ChannelTransform(ExpressionNode const&);
    void toJson(Json::Value &)const;
    ChannelTransform(ExpressionNode const&, int);
};
