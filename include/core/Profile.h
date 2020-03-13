#pragma once

#include <string>
#include "CounterToken.h"
#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        void getProfileTimeMS(char const*, char const*); // _ZN4Core7Profile16getProfileTimeMSEPKcS2_
        void generateCPUProfileToken(char const*, char const*, unsigned int); // _ZN4Core7Profile23generateCPUProfileTokenEPKcS2_j
        void generateCounterToken(char const*); // _ZN4Core7Profile20generateCounterTokenEPKc
//      void generateCounterTokenWithConfig(char const*, Core::Profile::CounterFormat, long, Core::Profile::CounterFlags); //TODO: incomplete function definition // _ZN4Core7Profile30generateCounterTokenWithConfigEPKcNS0_13CounterFormatElNS0_12CounterFlagsE
        void findCPUProfileToken(char const*, char const*); // _ZN4Core7Profile19findCPUProfileTokenEPKcS2_
        void getLargestFrameTimeMS(Core::Profile::CPUProfileToken); // _ZN4Core7Profile21getLargestFrameTimeMSENS0_15CPUProfileTokenE
        void getSmallestFrameTimeMS(Core::Profile::CPUProfileToken); // _ZN4Core7Profile22getSmallestFrameTimeMSENS0_15CPUProfileTokenE
        void getFrameTimeTotalMS(Core::Profile::CPUProfileToken); // _ZN4Core7Profile19getFrameTimeTotalMSENS0_15CPUProfileTokenE
        void getFrameCount(Core::Profile::CPUProfileToken); // _ZN4Core7Profile13getFrameCountENS0_15CPUProfileTokenE
        void onThreadCreate(char const*); // _ZN4Core7Profile14onThreadCreateEPKc
        void onThreadDestroy(); // _ZN4Core7Profile15onThreadDestroyEv
        void onMainThreadCreate(); // _ZN4Core7Profile18onMainThreadCreateEv
        void enterCPUProfile(Core::Profile::CPUProfileToken const&); // _ZN4Core7Profile15enterCPUProfileERKNS0_15CPUProfileTokenE
        void leaveCPUProfile(Core::Profile::CPUProfileToken const&); // _ZN4Core7Profile15leaveCPUProfileERKNS0_15CPUProfileTokenE
        void counterAdd(Core::Profile::CounterToken, long); // _ZN4Core7Profile10counterAddENS0_12CounterTokenEl
        void counterAdd(char const*, long); // _ZN4Core7Profile10counterAddEPKcl
        void counterSet(Core::Profile::CounterToken, long); // _ZN4Core7Profile10counterSetENS0_12CounterTokenEl
        void counterSet(char const*, long); // _ZN4Core7Profile10counterSetEPKcl
        void initializeProfile(); // _ZN4Core7Profile17initializeProfileEv
        void shutdownProfile(); // _ZN4Core7Profile15shutdownProfileEv
        void profileFlip(); // _ZN4Core7Profile11profileFlipEv
        std::string constructLabel(char const*); // _ZN4Core7Profile14constructLabelB5cxx11EPKc
//      void dumpFile(char const*, Core::Profile::FileExtension); //TODO: incomplete function definition // _ZN4Core7Profile8dumpFileEPKcNS0_13FileExtensionE
        void onFileOpenRequest(bool); // _ZN4Core7Profile17onFileOpenRequestEb
        void onFileOpenRetry(bool); // _ZN4Core7Profile15onFileOpenRetryEb
        void onFileOpenRetrySuccess(bool); // _ZN4Core7Profile22onFileOpenRetrySuccessEb
        void onFileOpenFailed(bool); // _ZN4Core7Profile16onFileOpenFailedEb
//      void getFileOpenStats(Core::Profile::FileCounters &, Core::Profile::FileCounters &); //TODO: incomplete function definition // _ZN4Core7Profile16getFileOpenStatsERNS0_12FileCountersES2_
    };
}
