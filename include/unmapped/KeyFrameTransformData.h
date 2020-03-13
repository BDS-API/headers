#pragma once



class KeyFrameTransformData {

public:
    void operator==(KeyFrameTransformData const&)const; // _ZNK21KeyFrameTransformDataeqERKS_
    void operator!=(KeyFrameTransformData const&)const; // _ZNK21KeyFrameTransformDataneERKS_
    void addChannelTransform(ExpressionNode const&); // _ZN21KeyFrameTransformData19addChannelTransformERK14ExpressionNode
    void addChannelTransform(ExpressionNode const&, int); // _ZN21KeyFrameTransformData19addChannelTransformERK14ExpressionNodei
    void addChannelTransform(ExpressionNode const&, Vec3 const&); // _ZN21KeyFrameTransformData19addChannelTransformERK14ExpressionNodeRK4Vec3
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); // _ZN21KeyFrameTransformData19addChannelTransformERK14ExpressionNodeS2_S2_
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition // _ZNK21KeyFrameTransformData7animateER12RenderParamsR15BoneOrientationf17BoneTransformType
    bool isConstant()const; // _ZNK21KeyFrameTransformData10isConstantEv
    void getSequencedTransformCount()const; // _ZNK21KeyFrameTransformData26getSequencedTransformCountEv
    void operator[](unsigned long); // _ZN21KeyFrameTransformDataixEm
    void operator[](unsigned long)const; // _ZNK21KeyFrameTransformDataixEm
    void toJson(Json::Value &)const; // _ZNK21KeyFrameTransformData6toJsonERN4Json5ValueE
    KeyFrameTransformData(); // _ZN21KeyFrameTransformDataC2Ev
    ~KeyFrameTransformData(); // _ZN21KeyFrameTransformDataD2Ev
    KeyFrameTransformData(KeyFrameTransformData &&); // _ZN21KeyFrameTransformDataC2EOS_
    KeyFrameTransformData(KeyFrameTransformData const&); // _ZN21KeyFrameTransformDataC2ERKS_
};
