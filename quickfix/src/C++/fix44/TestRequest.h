#ifndef FIX44_TESTREQUEST_H
#define FIX44_TESTREQUEST_H

#include "Message.h"

namespace FIX44
{

  class TestRequest : public Message
  {
  public:
    TestRequest() : Message(MsgType()) {}
    TestRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("1"); }

    TestRequest(
      const FIX::TestReqID& aTestReqID )
    : Message(MsgType())
    {
      set(aTestReqID);
    }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
