#pragma once

#include "Result.h"
#include <functional>


namespace Core {

    class TransactionFrame {

    public:
//      void exec(Core::FileAccessType, Core::Path const&, std::function<Core::Result (Core::TransactionFrame &)> const&); //TODO: incomplete function definition // _ZN4Core16TransactionFrame4execENS_14FileAccessTypeERKNS_4PathERKSt8functionIFNS_6ResultERS0_EE
//      TransactionFrame(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition // _ZN4Core16TransactionFrameC2ENS_14FileAccessTypeERKNS_4PathE
        ~TransactionFrame(); // _ZN4Core16TransactionFrameD2Ev
        void getTransaction(); // _ZN4Core16TransactionFrame14getTransactionEv
        void getPath()const; // _ZNK4Core16TransactionFrame7getPathEv
    };
}
