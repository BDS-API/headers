#pragma once

#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        class ProfileMultiSectionCPU {

        public:
            class ProfileSectionSuspend;

            void end();
            ProfileMultiSectionCPU();
            ~ProfileMultiSectionCPU();
            void suspend();
            void begin();
            ProfileMultiSectionCPU(Core::Profile::CPUProfileToken);
            class ProfileSectionSuspend {

            public:
                ProfileSectionSuspend(Core::Profile::ProfileMultiSectionCPU &);
                ~ProfileSectionSuspend();
            };
        };
    }
}
