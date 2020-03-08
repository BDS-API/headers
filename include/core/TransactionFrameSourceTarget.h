#pragma once



using namespace Core;

class TransactionFrameSourceTarget {

public:

    void exec(Core::Path const&, Core::Path const&, std::function<Core::Result ()(Core::TransactionFrameSourceTarget&)>, std::function<Core::Result ()(Core::TransactionFrameSourceTarget&)>);
    TransactionFrameSourceTarget(Core::Path, Core::Path);
    void getTransaction(void);
    void getSourceEntryPath(void)const;
    void getTargetEntryPath(void)const;
    void getSourceTransaction(void);
    void getTargetTransaction(void);
};
