#pragma once



class KeyFrameLerpMode {

public:
//  void setPrecomputedCubicCoeffs(glm::tmat4x40<float, (glm::precision>); //TODO: incomplete function definition
    void getLerpStyle()const;
    void getPrecomputedCubicCoeffs()const;
    bool isCubic()const;
    KeyFrameLerpMode();
    void lerp(float)const;
//  void setLerpStyle(KeyFrameLerpStyle); //TODO: incomplete function definition
};
