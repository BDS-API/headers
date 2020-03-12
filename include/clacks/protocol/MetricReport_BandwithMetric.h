#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_BandwithMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void ByteSizeLong()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void New()const;
                    virtual void GetCachedSize()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void Clear();
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    ~MetricReport_BandwithMetric();
                    virtual bool IsInitialized()const;
                    void InitAsDefaultInstance();
                    void descriptor();
                    void default_instance();
                    MetricReport_BandwithMetric();
                    void set_connectiontotalbytessent(long);
                    void mutable_xuid();
                    void internal_default_instance();
                    void GetArenaNoVirtual()const;
                    void connectiontotalbytesreceived()const;
                    void connectiontotalbytessent()const;
                    void set_playerdeltabytesreceived(long);
                    void _internal_xuid()const;
                    void set_playerdeltabytessent(long);
                    void SharedDtor();
                    void xuid()const;
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void playerdeltabytesreceived()const;
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    void Swap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    MetricReport_BandwithMetric(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void set_connectiontotalbytesreceived(long);
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void has_xuid()const;
                    void playerdeltabytessent()const;
                    void SharedCtor();
                };
            }
        }
    }
}
