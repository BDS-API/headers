#pragma once



using namespace Core;

class TransactionFrameSourceTarget {

public:

    void exec(Core::Path const&, Core::Path const&, std::function<Core::Result ()(Core::TransactionFrameSourceTarget&)>, std::function<Core::Result ()(Core::TransactionFrameSourceTarget&)>);
    TransactionFrameSourceTarget(Core::Path, Core::Path);
    void getTransaction();
    void getSourceEntryPath()const;
    void getTargetEntryPath()const;
    void getSourceTransaction();
    void getTargetTransaction();
};
