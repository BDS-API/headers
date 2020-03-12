#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class MetricUnion;

                    virtual void Clear();
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void New()const;
                    virtual void GetMetadata()const;
                    virtual void SetCachedSize(int)const;
                    virtual bool IsInitialized()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    ~MetricReport();
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
                    void clear_has_metric();
                    void InitAsDefaultInstance();
                    void has_latency()const;
                    void ticktime()const;
                    void GetArenaNoVirtual()const;
                    MetricReport();
                    MetricReport(com::mojang::clacks::protocol::MetricReport const&);
                    void SharedCtor();
                    void _internal_latency()const;
                    void set_has_bandwith();
                    void has_metric()const;
                    void clear_metric();
                    void has_ticktime()const;
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport *);
                    void set_has_latency();
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport const&);
                    void SharedDtor();
                    void set_allocated_bandwith(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    void set_allocated_latency(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void latency()const;
                    void bandwith()const;
                    void _internal_bandwith()const;
                    void default_instance();
                    void mutable_bandwith();
                    void has_bandwith()const;
                    void set_has_ticktime();
                    void Swap(com::mojang::clacks::protocol::MetricReport *);
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport const&);
                    void mutable_latency();
                    void internal_default_instance();
                    void descriptor();
                    void metric_case()const;
                    void set_ticktime(long);
                    class MetricUnion {

                    public:
                        MetricUnion();
                    };
                };
            }
        }
    }
}
