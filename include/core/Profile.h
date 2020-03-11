#pragma once

#include "./CPUProfileToken.h"
#include "./CounterToken.h"
#include <string>


namespace Core {

class Profile {

public:

    void getProfileTimeMS(char const*, char const*);
    void generateCPUProfileToken(char const*, char const*, unsigned int);
    void generateCounterToken(char const*);
//  void generateCounterTokenWithConfig(char const*, Core::Profile::CounterFormat, long, Core::Profile::CounterFlags); //TODO: incomplete function definition
    void findCPUProfileToken(char const*, char const*);
    void getLargestFrameTimeMS(Core::Profile::CPUProfileToken);
    void getSmallestFrameTimeMS(Core::Profile::CPUProfileToken);
    void getFrameTimeTotalMS(Core::Profile::CPUProfileToken);
    void getFrameCount(Core::Profile::CPUProfileToken);
    void onThreadCreate(char const*);
    void onThreadDestroy();
    void onMainThreadCreate();
    void enterCPUProfile(Core::Profile::CPUProfileToken const&);
    void leaveCPUProfile(Core::Profile::CPUProfileToken const&);
    void counterAdd(Core::Profile::CounterToken, long);
    void counterAdd(char const*, long);
    void counterSet(Core::Profile::CounterToken, long);
    void counterSet(char const*, long);
    void initializeProfile();
    void shutdownProfile();
    void profileFlip();
    std::string constructLabel(char const*);
//  void dumpFile(char const*, Core::Profile::FileExtension); //TODO: incomplete function definition
    void onFileOpenRequest(bool);
    void onFileOpenRetry(bool);
    void onFileOpenRetrySuccess(bool);
    void onFileOpenFailed(bool);
//  void getFileOpenStats(Core::Profile::FileCounters &, Core::Profile::FileCounters &); //TODO: incomplete function definition
};

}