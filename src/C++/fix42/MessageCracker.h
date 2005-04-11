/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/
 
#ifndef FIX42_MESSAGECRACKER_H
#define FIX42_MESSAGECRACKER_H

#include "../SessionID.h"
#include "../Exceptions.h"
#include "../fix42/Message.h"

namespace FIX42
{  
  class Heartbeat; 
  class Logon; 
  class TestRequest; 
  class ResendRequest; 
  class Reject; 
  class SequenceReset; 
  class Logout; 
  class Advertisement; 
  class IndicationofInterest; 
  class News; 
  class Email; 
  class QuoteRequest; 
  class Quote; 
  class MassQuote; 
  class QuoteCancel; 
  class QuoteStatusRequest; 
  class QuoteAcknowledgement; 
  class MarketDataRequest; 
  class MarketDataSnapshotFullRefresh; 
  class MarketDataIncrementalRefresh; 
  class MarketDataRequestReject; 
  class SecurityDefinitionRequest; 
  class SecurityDefinition; 
  class SecurityStatusRequest; 
  class SecurityStatus; 
  class TradingSessionStatusRequest; 
  class TradingSessionStatus; 
  class NewOrderSingle; 
  class ExecutionReport; 
  class DontKnowTrade; 
  class OrderCancelReplaceRequest; 
  class OrderCancelRequest; 
  class OrderCancelReject; 
  class OrderStatusRequest; 
  class Allocation; 
  class AllocationACK; 
  class SettlementInstructions; 
  class BidRequest; 
  class BidResponse; 
  class NewOrderList; 
  class ListStrikePrice; 
  class ListStatus; 
  class ListExecute; 
  class ListCancelRequest; 
  class ListStatusRequest; 
  class BusinessMessageReject;

  class MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( const Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
 virtual void onMessage( const Heartbeat&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logon&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const TestRequest&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const ResendRequest&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Reject&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const SequenceReset&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logout&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Advertisement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const IndicationofInterest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const News&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Email&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Quote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MassQuote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteCancel&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteAcknowledgement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataSnapshotFullRefresh&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataIncrementalRefresh&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequestReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityDefinitionRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityDefinition&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradingSessionStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradingSessionStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ExecutionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DontKnowTrade&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReplaceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Allocation&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationACK&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SettlementInstructions&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const BidRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const BidResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStrikePrice&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListExecute&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const BusinessMessageReject&, const FIX::SessionID& ) 
    {}
 
public:
  void crack( const Message& message, 
              const FIX::SessionID& sessionID )
  {
    FIX::MsgType msgType;
    message.getHeader().getField(msgType);
    std::string msgTypeValue = msgType.getValue();
    
    if( msgTypeValue == "0" )
      onMessage( (const Heartbeat&)message, sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( (const Logon&)message, sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( (const TestRequest&)message, sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( (const ResendRequest&)message, sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( (const Reject&)message, sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( (const SequenceReset&)message, sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( (const Logout&)message, sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( (const Advertisement&)message, sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( (const IndicationofInterest&)message, sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( (const News&)message, sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( (const Email&)message, sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( (const QuoteRequest&)message, sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( (const Quote&)message, sessionID );
    else
    if( msgTypeValue == "i" )
      onMessage( (const MassQuote&)message, sessionID );
    else
    if( msgTypeValue == "Z" )
      onMessage( (const QuoteCancel&)message, sessionID );
    else
    if( msgTypeValue == "a" )
      onMessage( (const QuoteStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "b" )
      onMessage( (const QuoteAcknowledgement&)message, sessionID );
    else
    if( msgTypeValue == "V" )
      onMessage( (const MarketDataRequest&)message, sessionID );
    else
    if( msgTypeValue == "W" )
      onMessage( (const MarketDataSnapshotFullRefresh&)message, sessionID );
    else
    if( msgTypeValue == "X" )
      onMessage( (const MarketDataIncrementalRefresh&)message, sessionID );
    else
    if( msgTypeValue == "Y" )
      onMessage( (const MarketDataRequestReject&)message, sessionID );
    else
    if( msgTypeValue == "c" )
      onMessage( (const SecurityDefinitionRequest&)message, sessionID );
    else
    if( msgTypeValue == "d" )
      onMessage( (const SecurityDefinition&)message, sessionID );
    else
    if( msgTypeValue == "e" )
      onMessage( (const SecurityStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "f" )
      onMessage( (const SecurityStatus&)message, sessionID );
    else
    if( msgTypeValue == "g" )
      onMessage( (const TradingSessionStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "h" )
      onMessage( (const TradingSessionStatus&)message, sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( (const NewOrderSingle&)message, sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( (const ExecutionReport&)message, sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( (const DontKnowTrade&)message, sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( (const OrderCancelReplaceRequest&)message, sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( (const OrderCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( (const OrderCancelReject&)message, sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( (const OrderStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( (const Allocation&)message, sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( (const AllocationACK&)message, sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( (const SettlementInstructions&)message, sessionID );
    else
    if( msgTypeValue == "k" )
      onMessage( (const BidRequest&)message, sessionID );
    else
    if( msgTypeValue == "l" )
      onMessage( (const BidResponse&)message, sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( (const NewOrderList&)message, sessionID );
    else
    if( msgTypeValue == "m" )
      onMessage( (const ListStrikePrice&)message, sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( (const ListStatus&)message, sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( (const ListExecute&)message, sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( (const ListCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( (const ListStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "j" )
      onMessage( (const BusinessMessageReject&)message, sessionID );
    else onMessage( message, sessionID );
  }
  

  };
}

#endif //FIX42_MESSAGECRACKER_H
