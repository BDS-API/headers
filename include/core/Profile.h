#pragma once

#include <string>
#include "CPUProfileToken.h"
#include "CounterToken.h"


namespace Core {

    namespace Profile {

        void counterAdd(Core::Profile::CounterToken, long);
        void onFileOpenFailed(bool);
        void initializeProfile();
        void onFileOpenRetrySuccess(bool);
        void generateCounterToken(char const*);
        void getProfileTimeMS(char const*, char const*);
        void onFileOpenRetry(bool);
//      void getFileOpenStats(Core::Profile::FileCounters &, Core::Profile::FileCounters &); //TODO: incomplete function definition
//      void dumpFile(char const*, Core::Profile::FileExtension); //TODO: incomplete function definition
        void onThreadDestroy();
        void getFrameTimeTotalMS(Core::Profile::CPUProfileToken);
        void getLargestFrameTimeMS(Core::Profile::CPUProfileToken);
        void onThreadCreate(char const*);
        void profileFlip();
        void leaveCPUProfile(Core::Profile::CPUProfileToken const&);
        void onFileOpenRequest(bool);
        void generateCPUProfileToken(char const*, char const*, unsigned int);
        void getSmallestFrameTimeMS(Core::Profile::CPUProfileToken);
        void counterAdd(char const*, long);
        void enterCPUProfile(Core::Profile::CPUProfileToken const&);
        void counterSet(char const*, long);
        std::string constructLabel(char const*);
        void onMainThreadCreate();
//      void generateCounterTokenWithConfig(char const*, Core::Profile::CounterFormat, long, Core::Profile::CounterFlags); //TODO: incomplete function definition
        void findCPUProfileToken(char const*, char const*);
        void shutdownProfile();
        void counterSet(Core::Profile::CounterToken, long);
        void getFrameCount(Core::Profile::CPUProfileToken);
    };
}
