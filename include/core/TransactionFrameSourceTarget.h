#pragma once

#include "Result.h"
#include <functional>
#include "Path.h"


namespace Core {

    class TransactionFrameSourceTarget {

    public:
        void exec(Core::Path const&, Core::Path const&, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>, std::function<Core::Result (Core::TransactionFrameSourceTarget &)>); // _ZN4Core28TransactionFrameSourceTarget4execERKNS_4PathES3_St8functionIFNS_6ResultERS0_EES8_
        TransactionFrameSourceTarget(Core::Path, Core::Path); // _ZN4Core28TransactionFrameSourceTargetC2ENS_4PathES1_
        ~TransactionFrameSourceTarget(); // _ZN4Core28TransactionFrameSourceTargetD2Ev
        void getTransaction(); // _ZN4Core28TransactionFrameSourceTarget14getTransactionEv
        void getSourceEntryPath()const; // _ZNK4Core28TransactionFrameSourceTarget18getSourceEntryPathEv
        void getTargetEntryPath()const; // _ZNK4Core28TransactionFrameSourceTarget18getTargetEntryPathEv
        void getSourceTransaction(); // _ZN4Core28TransactionFrameSourceTarget20getSourceTransactionEv
        void getTargetTransaction(); // _ZN4Core28TransactionFrameSourceTarget20getTargetTransactionEv
    };
}
