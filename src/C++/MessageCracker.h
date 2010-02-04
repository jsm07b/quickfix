/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifndef FIX_MESSAGECRACKER_H
#define FIX_MESSAGECRACKER_H

#include "fix40/MessageCracker.h"
#include "fix41/MessageCracker.h"
#include "fix42/MessageCracker.h"
#include "fix43/MessageCracker.h"
#include "fix44/MessageCracker.h"
#include "fix50/MessageCracker.h"
#include "fixt11/MessageCracker.h"
#include "Values.h"
#include "Session.h"

namespace FIX
{
/** Takes in a generic Message and produces an object that represents
 *  its specific version and message type.
 */
class MessageCracker
      : 
	  public FIX40::MessageCracker,
    public FIX41::MessageCracker,
    public FIX42::MessageCracker,
    public FIX43::MessageCracker,
    public FIX44::MessageCracker,
	  public FIX50::MessageCracker,
	  public FIXT11::MessageCracker
{
public:
  void crack( const Message& message,
              const SessionID& sessionID )
  {
    const FIX::BeginString& beginString = 
      FIELD_GET_REF( message.getHeader(), BeginString );

    crack( message, sessionID, beginString );
  }

  void crack( const Message& message,
              const SessionID& sessionID,
              const BeginString& beginString )
  {
    if ( beginString == BeginString_FIX40 )
      ((FIX40::MessageCracker&)(*this)).crack((const FIX40::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX41 )
      ((FIX41::MessageCracker&)(*this)).crack((const FIX41::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX42 )
      ((FIX42::MessageCracker&)(*this)).crack((const FIX42::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX43 )
      ((FIX43::MessageCracker&)(*this)).crack((const FIX43::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX44 )
      ((FIX44::MessageCracker&)(*this)).crack((const FIX44::Message&) message, sessionID);
    else if ( beginString == ApplVerId_FIX50 )
      ((FIX50::MessageCracker&)(*this)).crack((const FIX50::Message&) message, sessionID);
    else if ( beginString == BeginString_FIXT11 )
    {
      if( message.isAdmin() )
      {
        ((FIXT11::MessageCracker&)(*this)).crack((const FIXT11::Message&) message, sessionID);
      }
      else
      {
        ApplVerID applVerID;
        if(!message.getHeader().isSetField(applVerID))
        {
          Session* pSession = Session::lookupSession( sessionID );
          applVerID = pSession->getSenderDefaultApplVerID();
        }
        else
        {
          message.getHeader().getField( applVerID );
        }

        crack( message, sessionID, toBeginString(applVerID) );
      }
    }
  }

  BeginString toBeginString( const ApplVerID& applVerID )
  {
    if( applVerID == ApplVerID_FIX40 )
      return BeginString_FIX40;
    else if( applVerID == ApplVerID_FIX41 )
      return BeginString_FIX41;
    else if( applVerID == ApplVerID_FIX42 )
      return BeginString_FIX42;
    else if( applVerID == ApplVerID_FIX43 )
      return BeginString_FIX43;
    else if( applVerID == ApplVerID_FIX44 )
      return BeginString_FIX44;
    else if( applVerID == ApplVerID_FIX50 )
      return ApplVerId_FIX50;
    else
      return "";
  }

  void crack( Message& message,
              const SessionID& sessionID )
  {
    const FIX::BeginString& beginString = 
      FIELD_GET_REF( message.getHeader(), BeginString );

    crack( message, sessionID, beginString );
  }

  void crack( Message& message,
              const SessionID& sessionID,
              const BeginString& beginString )
  {
    if ( beginString == BeginString_FIX40 )
      ((FIX40::MessageCracker&)(*this)).crack((const FIX40::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX41 )
      ((FIX41::MessageCracker&)(*this)).crack((const FIX41::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX42 )
      ((FIX42::MessageCracker&)(*this)).crack((const FIX42::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX43 )
      ((FIX43::MessageCracker&)(*this)).crack((const FIX43::Message&) message, sessionID);
    else if ( beginString == BeginString_FIX44 )
      ((FIX44::MessageCracker&)(*this)).crack((const FIX44::Message&) message, sessionID);
    else if ( beginString == ApplVerId_FIX50 )
      ((FIX50::MessageCracker&)(*this)).crack((const FIX50::Message&) message, sessionID);
    else if ( beginString == BeginString_FIXT11 )
    {
      if( message.isAdmin() )
      {
        ((FIXT11::MessageCracker&)(*this)).crack((const FIXT11::Message&) message, sessionID);
      }
      else
      {
        ApplVerID applVerID;
        if(!message.getHeader().isSetField(applVerID))
        {
          Session* pSession = Session::lookupSession( sessionID );
          applVerID = pSession->getSenderDefaultApplVerID();
        }
        else
        {
          message.getHeader().getField( applVerID );
        }

        crack( message, sessionID, toBeginString(applVerID) );
      }
    }
  }
};
}

#endif //FIX_MESSAGECRACKER_H
