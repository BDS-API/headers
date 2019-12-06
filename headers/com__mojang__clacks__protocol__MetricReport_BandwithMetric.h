#pragma once

class com::mojang::clacks::protocol::MetricReport_BandwithMetric : google::protobuf::Message {

public:
    virtual ~MetricReport_BandwithMetric();
    virtual void New(void)const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear(void);
    virtual void IsInitialized(void)const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong(void)const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize(void)const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata(void)const;

    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
    void set_playerdeltabytessent(long);
    void set_playerdeltabytesreceived(long);
    void set_connectiontotalbytesreceived(long);
    void set_connectiontotalbytessent(long);
    void GetArenaNoVirtual(void)const;
    void InitAsDefaultInstance(void);
    void MetricReport_BandwithMetric(void);
    void SharedCtor(void);
    void MetricReport_BandwithMetric(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void Swap(com::mojang::clacks::protocol::MetricReport_BandwithMetric*);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport_BandwithMetric*);
    void has_xuid(void)const;
    void internal_default_instance(void);
    void mutable_xuid(void);
    void _internal_xuid(void)const;
    void playerdeltabytessent(void)const;
    void playerdeltabytesreceived(void)const;
    void connectiontotalbytesreceived(void)const;
    void connectiontotalbytessent(void)const;
    void xuid(void)const;
};
