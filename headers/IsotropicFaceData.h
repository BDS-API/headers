#pragma once

class IsotropicFaceData {

public:

    void IsotropicFaceData(void);
    void setTextureIsotropic(unsigned int);
    void setTextureIsotropic(Json::Value const&);
    void setAllFacesIsotropic(void);
    void setNoFacesIsotropic(void);
    bool isTextureIsotropic(unsigned char)const;
    bool isFaceIsotropicEnabled(unsigned char)const;
    void getFaceTextureIsotropic(void);
    void setAllFacesEnabled(void);
};
