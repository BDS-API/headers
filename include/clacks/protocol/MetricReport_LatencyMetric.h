#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_LatencyMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void Clear();
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void New()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void GetMetadata()const;
                    virtual bool IsInitialized()const;
                    virtual void ByteSizeLong()const;
                    ~MetricReport_LatencyMetric();
                    void InitAsDefaultInstance();
                    MetricReport_LatencyMetric(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void mutable_xuid();
                    void default_instance();
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void SharedCtor();
                    void internal_default_instance();
                    void descriptor();
                    MetricReport_LatencyMetric();
                    void has_xuid()const;
                    void SharedDtor();
                    void pinginns()const;
                    void Swap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void set_pinginns(long);
                    void xuid()const;
                    void set_latencyinns(long);
                    void _internal_xuid()const;
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
                    void GetArenaNoVirtual()const;
                    void latencyinns()const;
                };
            }
        }
    }
}
