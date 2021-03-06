//
// Generated file, do not edit! Created by nedtool 5.2 from ControlPacket.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __CONTROLPACKET_M_H
#define __CONTROLPACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>ControlPacket.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet ControlPacket
 * {
 *     double data;
 * }
 * </pre>
 */
class ControlPacket : public ::omnetpp::cPacket
{
  protected:
    double data;

  private:
    void copy(const ControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ControlPacket&);

  public:
    ControlPacket(const char *name=nullptr, short kind=0);
    ControlPacket(const ControlPacket& other);
    virtual ~ControlPacket();
    ControlPacket& operator=(const ControlPacket& other);
    virtual ControlPacket *dup() const override {return new ControlPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual double getData() const;
    virtual void setData(double data);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ControlPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ControlPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef __CONTROLPACKET_M_H

