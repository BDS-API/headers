#pragma once



class IInPackagePacks {

public:
    class MetaData;

    ~IInPackagePacks();
    IInPackagePacks();
    class MetaData {

    public:
//      MetaData(Core::Path const&, bool, PackCategory); //TODO: incomplete function definition
        ~MetaData();
        MetaData(IInPackagePacks::MetaData const&);
    };
};
