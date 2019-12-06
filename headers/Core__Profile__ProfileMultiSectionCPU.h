#pragma once

class Core::Profile::ProfileMultiSectionCPU {

public:

    void ProfileMultiSectionCPU(void);
    void ProfileMultiSectionCPU(Core::Profile::CPUProfileToken);
    void begin(void);
    void end(void);
    void suspend(void);
};
