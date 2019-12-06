#pragma once

class Core::TransactionFrame {

public:

    void exec(Core::FileAccessType, Core::Path const&, std::function<Core::Result ()(Core::TransactionFrame&)> const&);
    void TransactionFrame(Core::FileAccessType, Core::Path const&);
    void getTransaction(void);
    void getPath(void)const;
};
