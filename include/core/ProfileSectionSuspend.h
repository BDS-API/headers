#pragma once

#include "./ProfileMultiSectionCPU.h"


namespace Core::Profile::ProfileMultiSectionCPU {

class ProfileSectionSuspend {

public:

    ProfileSectionSuspend(Core::Profile::ProfileMultiSectionCPU &);
    ~ProfileSectionSuspend();
};

}