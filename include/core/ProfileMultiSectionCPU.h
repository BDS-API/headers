#pragma once



using namespace Core::Profile;

class ProfileMultiSectionCPU {

public:

    ProfileMultiSectionCPU(void);
    ProfileMultiSectionCPU(Core::Profile::CPUProfileToken);
    void begin();
    void end();
    void suspend();
};
