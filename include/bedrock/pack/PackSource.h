#pragma once



class PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    ~PackSource();
    void fetchPack(PackIdVersion const&);
    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    PackSource();
};
