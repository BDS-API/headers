#pragma once



namespace Bedrock {

    namespace Threading {

        namespace ThreadUtil {

//          void setCurrentThreadPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading10ThreadUtil24setCurrentThreadPriorityERKNS0_16OSThreadPriorityE
//          void setThreadPriority(void const*, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading10ThreadUtil17setThreadPriorityEPKvRKNS0_16OSThreadPriorityE
//          void setThreadPriority(unsigned long const&, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading10ThreadUtil17setThreadPriorityERKmRKNS0_16OSThreadPriorityE
            void setCurrentThreadCoreAffinity(int, unsigned long); // _ZN7Bedrock9Threading10ThreadUtil28setCurrentThreadCoreAffinityEim
            void setCoreAffinity(void const*, int, unsigned long); // _ZN7Bedrock9Threading10ThreadUtil15setCoreAffinityEPKvim
            void setCoreAffinity(unsigned long const&, int, unsigned long); // _ZN7Bedrock9Threading10ThreadUtil15setCoreAffinityERKmim
        };
    }
}
