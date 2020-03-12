#pragma once

#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        class ProfileSectionCPU {

        public:
            ~ProfileSectionCPU();
            ProfileSectionCPU(Core::Profile::CPUProfileToken const&);
        };
    }
}
