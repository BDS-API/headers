#pragma once



using namespace Core;

class TransactionFrame {

public:

    void exec(Core::FileAccessType, Core::Path const&, std::function<Core::Result ()(Core::TransactionFrame&)> const&);
    TransactionFrame(Core::FileAccessType, Core::Path const&);
    void getTransaction();
    void getPath()const;
};
