#pragma once

#include "../json/Value"


class IsotropicFaceData {

public:

    IsotropicFaceData(void);
    void setTextureIsotropic(unsigned int);
    void setTextureIsotropic(Json::Value const&);
    void setAllFacesIsotropic();
    void setNoFacesIsotropic();
    bool isTextureIsotropic(unsigned char)const;
    bool isFaceIsotropicEnabled(unsigned char)const;
    void getFaceTextureIsotropic();
    void setAllFacesEnabled();
};
