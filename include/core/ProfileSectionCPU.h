#pragma once

#include "./CPUProfileToken.h"


namespace Core::Profile {

class ProfileSectionCPU {

public:

    ProfileSectionCPU(Core::Profile::CPUProfileToken const&);
    ~ProfileSectionCPU();
};

}