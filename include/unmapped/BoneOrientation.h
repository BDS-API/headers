#pragma once



class BoneOrientation {

public:
    BoneOrientation(HashedString const&); // _ZN15BoneOrientationC2ERK12HashedString
    void init(BoneOrientationTransform &); // _ZN15BoneOrientation4initER24BoneOrientationTransform
//  void add(float, float, float, BoneTransformType); //TODO: incomplete function definition // _ZN15BoneOrientation3addEfff17BoneTransformType
//  void scale(float, float, float, BoneTransformType); //TODO: incomplete function definition // _ZN15BoneOrientation5scaleEfff17BoneTransformType
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float); // _ZN15BoneOrientation22applyShortestPathBlendERKS_S1_ff
    void getTransform()const; // _ZNK15BoneOrientation12getTransformEv
    void setDefaultTransform(BoneOrientationTransform const&); // _ZN15BoneOrientation19setDefaultTransformERK24BoneOrientationTransform
    void setTransform(BoneOrientationTransform const&); // _ZN15BoneOrientation12setTransformERK24BoneOrientationTransform
    void getDefaultTransform()const; // _ZNK15BoneOrientation19getDefaultTransformEv
    void getDefaultTransform(); // _ZN15BoneOrientation19getDefaultTransformEv
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition // _ZN15BoneOrientation23setRotationRelativeModeE25BoneAnimationRelativeMode
    void getRotationRelativeMode()const; // _ZNK15BoneOrientation23getRotationRelativeModeEv
    void setPivot(Vec3 const&); // _ZN15BoneOrientation8setPivotERK4Vec3
    void getPivot()const; // _ZNK15BoneOrientation8getPivotEv
    void getPivot(); // _ZN15BoneOrientation8getPivotEv
    void transform3(Vec3 &); // _ZN15BoneOrientation10transform3ER4Vec3
    void getName()const; // _ZNK15BoneOrientation7getNameEv
    void setMatrix(Matrix const&); // _ZN15BoneOrientation9setMatrixERK6Matrix
    void getMatrix()const; // _ZNK15BoneOrientation9getMatrixEv
    void shouldOverrideStackMatrix()const; // _ZNK15BoneOrientation25shouldOverrideStackMatrixEv
    void setOverrideStackMatrix(bool); // _ZN15BoneOrientation22setOverrideStackMatrixEb
    void updateLocalPreTransformMatrix(); // _ZN15BoneOrientation29updateLocalPreTransformMatrixEv
    void shouldApplyLocalPreTransformMatrix()const; // _ZNK15BoneOrientation34shouldApplyLocalPreTransformMatrixEv
    void rotateLocalPreTransformMatrix(float, Vec3 const&); // _ZN15BoneOrientation29rotateLocalPreTransformMatrixEfRK4Vec3
    void getLocalPreTransformMatrix()const; // _ZNK15BoneOrientation26getLocalPreTransformMatrixEv
    void copySourceDataFrom(BoneOrientation const&); // _ZN15BoneOrientation18copySourceDataFromERKS_
    void getIdentityBoneOrientation(); // _ZN15BoneOrientation26getIdentityBoneOrientationEv
    void setDefaultPose(); // _ZN15BoneOrientation14setDefaultPoseEv
    BoneOrientation(); // _ZN15BoneOrientationC2Ev
    ~BoneOrientation(); // _ZN15BoneOrientationD2Ev
    BoneOrientation(BoneOrientation const&); // _ZN15BoneOrientationC2ERKS_
};
