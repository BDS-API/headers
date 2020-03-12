#pragma once

#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        class ProfileMultiSectionCPU {

        public:
            class ProfileSectionSuspend;

            void end();
            ProfileMultiSectionCPU();
            void suspend();
            ProfileMultiSectionCPU(Core::Profile::CPUProfileToken);
            void begin();
            ~ProfileMultiSectionCPU();
            class ProfileSectionSuspend {

            public:
                ProfileSectionSuspend(Core::Profile::ProfileMultiSectionCPU &);
                ~ProfileSectionSuspend();
            };
        };
    }
}
