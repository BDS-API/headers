#pragma once



class KeyFrameLerpMode {

public:
    KeyFrameLerpMode();
    bool isCubic()const;
    void lerp(float)const;
//  void setPrecomputedCubicCoeffs(glm::tmat4x40<float, (glm::precision>); //TODO: incomplete function definition
    void getLerpStyle()const;
    void getPrecomputedCubicCoeffs()const;
//  void setLerpStyle(KeyFrameLerpStyle); //TODO: incomplete function definition
};
