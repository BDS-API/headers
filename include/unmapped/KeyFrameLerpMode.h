#pragma once



class KeyFrameLerpMode {

public:
    void getLerpStyle()const; // _ZNK16KeyFrameLerpMode12getLerpStyleEv
//  void setPrecomputedCubicCoeffs(glm::tmat4x40<float, (glm::precision>); //TODO: incomplete function definition // _ZN16KeyFrameLerpMode25setPrecomputedCubicCoeffsERKN3glm7tmat4x4IfLNS0_9precisionE0EEE
    void getPrecomputedCubicCoeffs()const; // _ZNK16KeyFrameLerpMode25getPrecomputedCubicCoeffsEv
    void lerp(float)const; // _ZNK16KeyFrameLerpMode4lerpEf
    bool isCubic()const; // _ZNK16KeyFrameLerpMode7isCubicEv
//  void setLerpStyle(KeyFrameLerpStyle); //TODO: incomplete function definition // _ZN16KeyFrameLerpMode12setLerpStyleE17KeyFrameLerpStyle
    KeyFrameLerpMode(); // _ZN16KeyFrameLerpModeC2Ev
};
