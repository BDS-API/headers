#pragma once

#include "./CPUProfileToken.h"


namespace Core::Profile {

class ProfileMultiSectionCPU {

public:

    ProfileMultiSectionCPU();
    ProfileMultiSectionCPU(Core::Profile::CPUProfileToken);
    ~ProfileMultiSectionCPU();
    void begin();
    void end();
    void suspend();
};

}