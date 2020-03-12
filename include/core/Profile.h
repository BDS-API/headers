#pragma once

#include "CounterToken.h"
#include "CPUProfileToken.h"


namespace Core {

    namespace Profile {

        void findCPUProfileToken(char const*, char const*);
        void leaveCPUProfile(Core::Profile::CPUProfileToken const&);
        void onFileOpenFailed(bool);
//      void dumpFile(char const*, Core::Profile::FileExtension); //TODO: incomplete function definition
        void getFrameTimeTotalMS(Core::Profile::CPUProfileToken);
        void onFileOpenRetrySuccess(bool);
        void getSmallestFrameTimeMS(Core::Profile::CPUProfileToken);
        void initializeProfile();
        void enterCPUProfile(Core::Profile::CPUProfileToken const&);
        std::string constructLabel(char const*);
        void counterSet(char const*, long);
        void onThreadCreate(char const*);
        void counterSet(Core::Profile::CounterToken, long);
        void counterAdd(Core::Profile::CounterToken, long);
        void profileFlip();
        void getProfileTimeMS(char const*, char const*);
        void onMainThreadCreate();
        void getFrameCount(Core::Profile::CPUProfileToken);
        void onFileOpenRequest(bool);
//      void generateCounterTokenWithConfig(char const*, Core::Profile::CounterFormat, long, Core::Profile::CounterFlags); //TODO: incomplete function definition
        void onThreadDestroy();
        void generateCPUProfileToken(char const*, char const*, unsigned int);
        void getLargestFrameTimeMS(Core::Profile::CPUProfileToken);
//      void getFileOpenStats(Core::Profile::FileCounters &, Core::Profile::FileCounters &); //TODO: incomplete function definition
        void counterAdd(char const*, long);
        void generateCounterToken(char const*);
        void onFileOpenRetry(bool);
        void shutdownProfile();
    };
}
