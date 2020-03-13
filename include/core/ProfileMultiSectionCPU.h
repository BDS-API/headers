#pragma once

#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        class ProfileMultiSectionCPU {

        public:
            class ProfileSectionSuspend;

            ProfileMultiSectionCPU(); // _ZN4Core7Profile22ProfileMultiSectionCPUC2Ev
            ProfileMultiSectionCPU(Core::Profile::CPUProfileToken); // _ZN4Core7Profile22ProfileMultiSectionCPUC2ENS0_15CPUProfileTokenE
            ~ProfileMultiSectionCPU(); // _ZN4Core7Profile22ProfileMultiSectionCPUD2Ev
            void begin(); // _ZN4Core7Profile22ProfileMultiSectionCPU5beginEv
            void end(); // _ZN4Core7Profile22ProfileMultiSectionCPU3endEv
            void suspend(); // _ZN4Core7Profile22ProfileMultiSectionCPU7suspendEv
            class ProfileSectionSuspend {

            public:
                ProfileSectionSuspend(Core::Profile::ProfileMultiSectionCPU &); // _ZN4Core7Profile22ProfileMultiSectionCPU21ProfileSectionSuspendC2ERS1_
                ~ProfileSectionSuspend(); // _ZN4Core7Profile22ProfileMultiSectionCPU21ProfileSectionSuspendD2Ev
            };
        };
    }
}
