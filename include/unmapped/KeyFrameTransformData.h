#pragma once



class KeyFrameTransformData {

public:
    void toJson(Json::Value &)const;
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    void addChannelTransform(ExpressionNode const&, int);
    void getSequencedTransformCount()const;
    void operator==(KeyFrameTransformData const&)const;
    KeyFrameTransformData(KeyFrameTransformData const&);
    void addChannelTransform(ExpressionNode const&, Vec3 const&);
    void addChannelTransform(ExpressionNode const&);
    void operator[](unsigned long)const;
    ~KeyFrameTransformData();
    bool isConstant()const;
    KeyFrameTransformData();
    KeyFrameTransformData(KeyFrameTransformData &&);
    void operator[](unsigned long);
    void operator!=(KeyFrameTransformData const&)const;
};
